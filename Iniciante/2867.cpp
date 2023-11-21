#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
 
    int c, n, m, x;
    cin >> c;

    while (c--) {
        cin >> n >> m;
        x = m * log10(n) + 1;
        cout << x << endl;
    }
 
    return 0;
}