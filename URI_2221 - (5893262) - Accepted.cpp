#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int t, b, a1, d1, l1, a2, d2, l2, golpe1, golpe2;

    cin >> t;

    while(t--){

        cin >> b;
        cin >> a1 >> d1 >> l1;
        cin >> a2 >> d2 >> l2;

        golpe1 = (a1 + d1) / 2;
        golpe2 = (a2 + d2) / 2;

        if(l1 % 2 == 0)
            golpe1 += b;

        if(l2 % 2 == 0)
            golpe2 += b;

        if(golpe1 > golpe2)
            cout << "Dabriel" << endl;
        else if(golpe2 > golpe1)
            cout << "Guarte" << endl;
        else
            cout << "Empate" << endl;

    }

    return 0;
}
