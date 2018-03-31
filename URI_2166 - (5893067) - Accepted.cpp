#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n;
    double frac = 2;

    cin >> n;

    for(int i = 1; i < n; i++)
        frac = 2 + 1 / frac;

    cout << fixed << setprecision(10);

    if(n == 0)
        cout << 1.0 << endl;
    else
        cout << 1 + 1 / frac << endl;

    return 0;
}
