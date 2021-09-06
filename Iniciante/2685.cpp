#include <iostream>
 
using namespace std;
 
int main() {
 
    int m;

    while (cin >> m) {
        if (m < 90 || m == 360)
            cout << "Bom Dia!!" << endl;

        else if (m < 180) 
            cout << "Boa Tarde!!" << endl;

        else if (m < 270)
            cout << "Boa Noite!!" << endl;

        else // if m < 360
            cout << "De Madrugada!!" << endl;
    }
 
    return 0;
}