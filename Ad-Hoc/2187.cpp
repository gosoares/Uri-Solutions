#include <iostream>
 
using namespace std;
 
int main() {
 
    for (int v, c = 1; cin >> v && v != 0; c++) {
        int fifty = v / 50;
        v %= 50;
        int ten = v / 10;
        v %= 10;
        int five = v / 5;
        v %= 5;

        cout << "Teste " << c << endl;
        cout << fifty << " " << ten << " " << five << " " << v << endl << endl;
    }

    return 0;
}