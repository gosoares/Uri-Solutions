#include <iostream>

using namespace std;

int main() {

    long long a, b, c, d;

    cin >> a >> b >> c >> d;

    long long result = -1;

    for (long long n = a; n * n <= c; n += a) {
        if (c % n == 0) {
            if (n % b != 0 && d % n != 0) {
                result = n;
                break;
            }

            long long test = c / n;
            if (test % b != 0 && d % test != 0) {
                result = test;
                break;
            }
        }
    }

    cout << result << endl;

    return 0;
}