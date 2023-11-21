#include <cmath>
#include <iomanip>
#include <iostream>

#define endl '\n'
#define g 9.80665
#define pi 3.14159

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed << setprecision(5);

    double h, a, v, degree, v0x, v0y, t, px;
    unsigned int p1, p2, n;

    while (cin >> h >> p1 >> p2 >> n) {
        while (n--) {
            cin >> a >> v;

            degree = (a / 180) * pi;
            v0x = v * cos(degree);
            v0y = v * sin(degree);

            t = (-v0y + sqrt(v0y * v0y + 4 * g * h)) / (-2 * g);

            px = v0x * t;

            cout << px << " -> ";
            if (px >= p1 && px <= p2)
                cout << "DUCK" << endl;
            else
                cout << "NUCK" << endl;
        }
    }

    return 0;
}