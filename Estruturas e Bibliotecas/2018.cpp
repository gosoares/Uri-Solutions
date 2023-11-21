#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

struct Medals {
    string name;

    int gold;
    int silver;
    int bronze;

    Medals() : name(""), gold(0), silver(0), bronze(0) {}

    Medals(string name, int gold, int silver, int bronze)
        : name(name), gold(gold), silver(silver), bronze(bronze) {}

    static bool Comparator(const Medals& m1, const Medals& m2) {
        if (m1.gold != m2.gold) return m1.gold > m2.gold;

        if (m1.silver != m2.silver) return m1.silver > m2.silver;

        if (m1.bronze != m2.bronze) return m1.bronze > m2.bronze;

        return m1.name.compare(m2.name) < 0;
    }
};

int main() {
    string description, gold, silver, bronze;

    unordered_map<string, Medals> board;

    while (getline(cin, description)) {
        getline(cin, gold);
        getline(cin, silver);
        getline(cin, bronze);

        board[gold].gold++;
        board[silver].silver++;
        board[bronze].bronze++;
    }

    vector<Medals> medals;
    medals.reserve(board.size());

    for (auto& p : board) {
        medals.emplace_back(p.first, p.second.gold, p.second.silver,
                            p.second.bronze);
    }

    sort(medals.begin(), medals.end(), Medals::Comparator);

    cout << "Quadro de Medalhas" << '\n';
    for (auto& m : medals) {
        cout << m.name << ' ' << m.gold << ' ' << m.silver << ' ' << m.bronze
             << '\n';
    }

    return 0;
}