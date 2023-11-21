#include <iostream>
#include <numeric>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned long long n, a, b, r, lcf;

    while (cin >> n >> a >> b && n > 0) {
        lcf = (a * b) / gcd(a, b);

        r = (n / a)     // qt of numbers i*a for i < n
            + (n / b)   // // qt of numbers i*a for i < n
            - n / lcf;  // minus the intersection

        cout << r << endl;
    }

    return 0;
}