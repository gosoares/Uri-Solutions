#include <iostream>
#include <unordered_set>
 
using namespace std;
 
int main() {
 
    string line;

    while(cin >> line) {
        string s;
        unordered_set<string> subs;

        for (int i = 0; i < line.size(); i++) {
            if (line[i] == '?') {
                cout << subs.size() << endl;
            } else {
                s += line[i];
                for(int t = 1; t <= s.size(); t++) {
                    string x = s.substr(s.size() - t, t);
                    subs.insert(x);
                }
            }
        }
    }
 
    return 0;
}