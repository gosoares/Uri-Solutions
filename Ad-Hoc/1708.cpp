#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int x, y;

    cin >> x >> y;

    double r = (double) y / (y - x);

    if(r > (int) r)
        r++;

    cout << (int) r << endl;

    return 0;
}
