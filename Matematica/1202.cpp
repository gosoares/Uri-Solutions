#include <cstring>
#include <iostream>
#include <vector>

#define endl '\n'

using namespace std;

int toDecimal(char *number) {
    int n = 0;
    int pow2 = 1;

    for (int i = strlen(number) - 1; i >= 0; i--) {
        // three last digits of fibonnacci sequence repeat at each 1500 numbers
        n = (n + (number[i] - '0') * pow2) % 1500;
        pow2 = (pow2 << 1) % 1500;
    }

    return n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char number[10001];
    int t, n;
    scanf("%d", &t);

    vector<int> fib(1501);
    fib[1] = 1;
    fib[2] = 1;
    int f = 2;

    while (t--) {
        scanf("%s", number);
        n = toDecimal(number);

        while (f < n) {
            f++;
            fib[f] = (fib[f - 1] + fib[f - 2]) % 1000;
        }

        printf("%03d\n", fib[n]);
    }

    return 0;
}