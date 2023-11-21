#include <iostream>
#include <unordered_map>
#include <sstream>
 
using namespace std;
 
int main() {
 
    string j, s, translation;
    int t, m, n;
    cin >> t;

    while (t--) {
        unordered_map<string, string> dictionary;

        while (m--) {
            getline(cin, j);
            getline(cin, s);

            dictionary[j] = s;
        }

        while (n--) {
            getline(cin, j);

            istringstream ss(j);

            ss >> s;
            cout << s;
            while (ss >> s) {
                auto it = dictionary.find(s);

                if (it == dictionary.end()) cout << ' ' << s;
                else cout << ' ' << (*it).second;
            }

            cout << endl;
        }

        cout << endl;
    }
 
    return 0;
}