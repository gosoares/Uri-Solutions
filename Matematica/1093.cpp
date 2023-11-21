#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
// reference: https://en.wikipedia.org/wiki/Gambler's_ruin
int main() {
 
    cout << fixed << setprecision(1);

    int ev1, ev2, at, d;

    while (cin >> ev1 >> ev2 >> at >> d) {
        if (ev1 == 0) break;

        int n1 = ceil(ev1 / d);
        int n2 = ceil(ev2 / d);

        if (at == 3) { // fair
            cout << ((double) n1 / (n1 + n2)) * 100.0 << endl;
            continue;
        }

        double p = at / 6.0, q = 1.0 - p;

        double p2 = (1 - pow(q / p, n1)) / (1 - pow(q / p, n1 + n2));

        cout << p2 * 100.0 << endl;
    }
 
    return 0;
}