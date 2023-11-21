#include <iostream>
#include <numeric>

#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;

    while (cin >> x >> y) {
        cout << 2 * (x + y) / gcd(x, y) << endl;
    }

    return 0;
}