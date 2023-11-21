#include <iostream>
 
using namespace std;
 
int main() {
 
    string s;
    getline(cin, s);

    int i = 0;
    while (i < s.size()) {
        if (s[i] == 'p') {
            cout << s[i + 1];
            i += 2;
        } else { // if space
            cout << ' ';
            i++;
        }
    }

    cout << endl;
 
    return 0;
}