#include <iostream>
#include <unordered_map>
 
using namespace std;
 
int main() {
 
    int c, n;

    string c1, c2, s;

    while (cin >> c >> n) {
        unordered_map<char, char> map;

        cin >> c1 >> c2;

        for (int i = 0; i < c1.size(); i++) {
            map[c1[i]] = c2[i];

            if (c1[i] >= 'A' && c1[i] <= 'Z' && c2[i] >= 'A' && c2[i] <= 'Z') {
                map[c1[i] - 'A' + 'a'] = c2[i] - 'A' + 'a';
            }
        }

        while (c--) {
            getline(cin, s);
            for (const char& c : s) {
                const auto& it = map.find(c);
                if (it == map.end()) cout << c;
                else cout << (*it).second;
            }
            cout << endl;
        }

        cout << endl;
    }
 
    return 0;
}