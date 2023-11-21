#include <iostream>
 
using namespace std;
 
int main() {
 
    string s, d;
    cin >> s >> d;

    int dx = abs(d[0] - s[0]);
    int dy = abs(d[1] - s[1]);

    if ((dx == 1 && dy == 2) || (dx == 2 && dy == 1)) {
        cout << "VALIDO" << endl;
    } else {
        cout << "INVALIDO" << endl;
    }
 
    return 0;
}