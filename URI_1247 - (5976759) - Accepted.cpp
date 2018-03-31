#include <iostream>
#include <cmath>

using namespace std;


int main() {

    double d, vf, vg;

    while(cin >> d >> vf >> vg){

        d = sqrt(144+d*d);

        if((d*vf)/vg <= 12)
            cout << 'S' << endl;
        else
            cout << 'N' << endl;
    }

    return 0;
}
