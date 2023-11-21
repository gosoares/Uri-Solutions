#include <iostream>
 
using namespace std;
 
int main() {
 
    string s;
    int n,  tourists = 0, jeeps = 0;

    while (cin >> s && s != "ABEND") {
        cin >> n;

        if (s == "SALIDA") {
            tourists += n;
            jeeps++;
        } else { // if VUELTA
            tourists -= n;
            jeeps--;
        }
    }

    cout << tourists << endl << jeeps << endl;
 
    return 0;
}