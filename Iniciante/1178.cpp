#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double x, n[100];

    cin >> n[0];

    for(int i = 1; i < 100; i++)
        n[i] = n[i-1] / 2;

    cout << fixed << setprecision(4);

    for(int i = 0; i < 100; i++)
        cout << "N[" << i << "] = " << n[i] << endl;

    return 0;
}
