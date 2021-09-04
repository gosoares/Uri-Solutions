#include <iostream>
#include <cmath>

using namespace std;

int main() {

    cout << fixed;
    cout.precision(4);

    int n, h, c, l;

    while(cin >> n){

        cin >> h >> c >> l;

        cout << sqrt(h*h + c*c) * n * l / 10000 << endl;

    }

    return 0;
}
