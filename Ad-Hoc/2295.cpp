#include <iostream>
 
using namespace std;
 
int main() {
 
    double a, g, ra, rg;
    cin >> a >> g >> ra >> rg;

    double ca = a / ra;
    double cg = g / rg;

    if (ca < cg) {
        cout << 'A' << endl;
    } else {
        cout << 'G' << endl;
    }
 
    return 0;
}