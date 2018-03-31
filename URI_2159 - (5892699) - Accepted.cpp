#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {

    unsigned long int n;

    cin >> n;

    double minn = n / log(n), maxx = 1.25506 * n / log(n);

    cout << fixed << setprecision(1) << minn << " " << maxx << endl;


    return 0;
}
