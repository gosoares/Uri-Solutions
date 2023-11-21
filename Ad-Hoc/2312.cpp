#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
struct Nation {
    string name;
    int gold;
    int silver;
    int bronze;
};

bool comparator (const Nation& n1, const Nation& n2) {
    if (n1.gold != n2.gold)
        return n1.gold > n2.gold;

    if(n1.silver != n2.silver)
        return n1.silver > n2.silver;

    if (n1.bronze != n2.bronze) 
        return n1.bronze > n2.bronze;

    return n1.name.compare(n2.name) < 0;
}

int main() {
 
    int n;
    cin >> n;

    vector<Nation> nations;

    while (n--) {
        nations.emplace_back();
        Nation & n = nations.back();
        cin >> n.name >> n.gold >> n.silver >> n.bronze;
    }

    sort(nations.begin(), nations.end(), comparator);

    for (const Nation& n : nations) {
        cout << n.name << " " << n.gold << " " << n.silver << " " << n.bronze << endl;
    }
 
    return 0;
}