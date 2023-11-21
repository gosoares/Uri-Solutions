#include <iostream>

using namespace std;

bool obeyRule(string &s) {
    int misplaced = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != 'A' + i) {
            misplaced++;
            if (misplaced > 2) return false;
        }
    }

    return misplaced == 2;
}

int main() {
    string s;
    int n, m;
    cin >> n;

    while (n--) {
        cin >> m;
        cin >> s;

        cout << ((obeyRule(s)) ? "There are the chance."
                               : "There aren't the chance.")
             << '\n';
    }

    return 0;
}