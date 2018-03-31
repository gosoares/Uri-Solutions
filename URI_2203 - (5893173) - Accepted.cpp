#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int xf, yf, xi, yi, vi, r1, r2;

    while(cin >> xf >> yf >> xi >> yi >> vi >> r1 >> r2){

        double d = sqrt(pow(xf - xi, 2) + pow(yf - yi, 2)) + vi * 1.5;

        if(d <= r1+r2)
            cout << 'Y' << endl;
        else
            cout << 'N' << endl;
    }

    return 0;
}
