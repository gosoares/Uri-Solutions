#include <iostream>

using namespace std;

int main() {

    int l, c, r1, r2, x, y;

    while(cin >> l >> c >> r1 >> r2){
        if(l == 0)
            break;

        x = l - (r2 + r1);
        y = c - (r2 + r1);

        if(2*r1 > l || 2*r1 > c || 2*r2 > l || 2*r2 > c || x*x + y*y < (r1+r2)*(r1+r2))
            cout << "N" << endl;
        else
            cout << "S" << endl;

    }

    return 0;
}
