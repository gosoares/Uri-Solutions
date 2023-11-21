#include <iostream>
 
using namespace std;
 
int main() {
 
    int r, l;
    cin >> r >> l;

    double v = (4.0/3.0) * (3.1415 * r*r*r);

    cout << (int) (l / v) << endl;
 
    return 0;
}