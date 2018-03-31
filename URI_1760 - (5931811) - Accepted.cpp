#include <iostream>
#include <math.h>

using namespace std;

int main(){

    double l;

    cout << fixed;
    cout.precision(2);

    while(cin >> l)
        cout << (l*l*sqrt(3)*8.0) / 20.0 << endl;

    return 0;
}
