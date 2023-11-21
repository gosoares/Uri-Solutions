#include <iostream>
 
using namespace std;
 
int main() {
 
    int c;
    cin >> c;

    string s;
    while (c--) {
        cin >> s;

        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] >= 'a' && s[i] <= 'z')
                cout << s[i];
        }

        cout << endl;
    }
 
    return 0;
}