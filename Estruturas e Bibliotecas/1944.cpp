#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, win = 0;
    cin >> n;
    cin.ignore();

    string s, panel = "FACE";

    while (n--) {
        getline(cin, s);
        s = {s[0], s[2], s[4], s[6]};

        if (s[0] == panel[panel.size() - 1] && s[1] == panel[panel.size() - 2]
            && s[2] == panel[panel.size() - 3] && s[3] == panel[panel.size() - 4]) {
            win++;
            panel = panel.substr(0, panel.size() - 4);
            if (panel.empty()) {
                panel = "FACE";
            }
        } else {
            panel += s;
        }
    }

    cout << win << endl;
 
    return 0;
}