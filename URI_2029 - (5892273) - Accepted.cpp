#include <iostream>

using namespace std;

int main() {

    double v, d, altura, area;

    cout.precision(2);
    cout << fixed;

    while(cin >> v >> d){
        area = 0.785*d*d;
        altura = v/area;

        cout << "ALTURA = " << altura << endl;
        cout << "AREA = " << area << endl;
    }

    return 0;
}
