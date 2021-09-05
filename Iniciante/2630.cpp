#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
 
    string type;
    int t, r, g, b, p;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        cin >> type >> r >> g >> b;

        if (type == "eye") {
            p = 0.3 * r + 0.59 * g + 0.11 * b;
        } else if (type == "mean") {
            p = (r + g + b) / 3;
        } else if (type == "max") {
            p = max({r, g, b});
        } else { // if min
            p = min({r, g, b});
        }

        cout << "Caso #" << i << ": " << p << endl;
    }
 
    return 0;
}