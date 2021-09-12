#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int v, n;
    cin >> v >> n;

    for (int p = 10; p <= 90; p += 10) {
        cout << (int) ceil(v * n * (p / 100.0));
        if (p < 90) cout << ' ';
    }

    cout << endl;

    return 0;
}