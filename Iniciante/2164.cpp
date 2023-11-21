#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {

    int n;

    cin >> n;

    double fib = (pow((1+sqrt(5))/2, n) - pow((1-sqrt(5))/2, n)) / sqrt(5);

    cout << fixed << setprecision(1) << fib << endl;


}
