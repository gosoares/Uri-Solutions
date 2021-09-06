#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    cout << fixed << setprecision(2);

    double n, x, y;
    cin >> n >> x >> y;

    cout << (n / (x + y)) << endl;
 
    return 0;
}