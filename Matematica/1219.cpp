#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main() {

    cout << fixed << setprecision(4);
 
    double a, b, c;
    
    while (cin >> a >> b >> c) {

        double p = (a + b + c) / 2.0; // half of perimeter of triangle
        double areaTriangle = sqrt(p * (p-a) * (p - b) * (p - c)); // area of triangle


        double rIn = areaTriangle / p; // radius of R
        double areaIn = M_PI * rIn * rIn; // area of R

        double rOut = (a * b * c) / sqrt((a + b + c) * (b + c - a) * (c + a - b) * (a + b - c));
        double areaOut = M_PI * rOut * rOut;

        cout << (areaOut - areaTriangle) << " " << (areaTriangle - areaIn) << " " << areaIn << endl;
    }
 
    return 0;
}