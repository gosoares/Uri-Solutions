#include <iostream>
#include <math.h>

using namespace std;

int main(){

    double a, b, c;

    cout << fixed;
    cout.precision(2);

    while(cin >> a >> b >> c){
        cout << (tan(a*3.141592654/180.0) * b + c) * 5 << endl;
    }

    return 0;
}
