#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n;
    double frac = 6;

    cin >> n;

    for(int i = 1; i < n; i++)
        frac = 6 + 1 / frac;

    cout << fixed << setprecision(10);

    if(n == 0)
        cout << 3.0 << endl;
    else
        cout << 3 + 1 / frac << endl;

    return 0;
}
