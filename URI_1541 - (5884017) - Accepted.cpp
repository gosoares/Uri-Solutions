#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int a, b, c, x;

    while(true){
        cin >> a;
        if(a == 0)
            break;

        cin >> b >> c;

        x = sqrt((100 * a * b) / c);

        cout << x << endl;
    }

    return 0;
}
