#include <iostream>

using namespace std;

typedef unsigned long long type;
const type mod = (1llu << 31) - 1llu;

type pow(type b, type e) {
    type result = 1;

    while (e) {
        if (e & 1) result = (result * b) % mod;
        b = (b * b) % mod;
        e >>= 1;
    }
    return result;
}

int main() {
    type r;
    cin >> r;

    type result = pow(3, r);

    cout << result << endl;

    return 0;
}