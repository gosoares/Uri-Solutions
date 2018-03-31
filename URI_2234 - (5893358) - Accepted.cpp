#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int h, p;

    cin >> h >> p;

    double media = (double) h / p;

    cout << fixed << setprecision(2) << media << endl;

    return 0;
}
