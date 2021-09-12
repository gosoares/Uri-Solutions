#include <iostream>
 
using namespace std;
 
int main() {
 
    int c;
    cin >> c;

    string s;

    while (c--) {
        cin >> s;

        int a1 = 0, a2 = 0, k = 0;

        while (s[++k] == 'a') a1++;
        k += 2;
        while (s[++k] == 'a') a2++;

        cout << 'k';

        for (int i = 0; i < a1 * a2; i++) {
            cout << 'a';
        }
        cout << endl;

    }

    return 0;
}