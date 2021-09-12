#include <cstdio>
#include <iostream>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int c = 1, n; cin >> n && n != -1; c++) {
        printf("Experiment %d: %d full cycle(s)\n", c, n / 2);
    }

    return 0;
}