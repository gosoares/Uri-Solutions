#include <iostream>
#include <sstream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    string text, word;
    int q;

    getline(cin, text);

    unordered_map<string, vector<int> > positions;
    istringstream iss(text);
    int pos = 0;
    while (iss >> word) {
        positions[word].push_back(pos);
        pos += word.size() + 1;
    }

    cin >> q;
    cin.ignore();

    while (q--) {
        cin >> word;

        auto it = positions.find(word);

        if (it == positions.end()) {
            cout << -1 << '\n';
            continue;
        }

        cout << (*it).second[0];

        for (int i = 1; i < (*it).second.size(); i++) {
            cout << ' ' << (*it).second[i];
        }
        cout << '\n';
    }

    return 0;
}