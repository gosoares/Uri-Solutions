#include <algorithm>
#include <iostream>

#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, c, p1, p2 = 1001, maxProfit = 0, minVal;

    cin >> n >> c;

    while (n--) {
        p1 = p2;
        cin >> p2;

        if (p2 < p1) {
            minVal = p2;
        } else {
            maxProfit = max(maxProfit, p2 - minVal);
        }
    }

    cout << max(0, maxProfit - c) << endl;

    return 0;
}