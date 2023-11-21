#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>

using namespace std;

typedef long long ll;

ll bfs(int n, int m) {
    unordered_map<ll, ll> steps;

    queue<int> values;
    values.push(n);
    steps[n] = 1;
    ll opRes[7];  // operation results

    while (true) {
        ll value = values.front();
        values.pop();

        opRes[1] = value * 2;
        opRes[2] = value * 3;
        opRes[3] = value / 2;
        opRes[4] = value / 3;
        opRes[5] = value + 7;
        opRes[6] = value - 7;

        for (int i = 1; i <= 6; i++) {
            if (steps[opRes[i]] == 0) {  // not checked value before
                values.push(opRes[i]);
                steps[opRes[i]] = steps[value] + 1;
            }
        }

        if (steps[m] > 0) return steps[m] - 1;
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    cout << bfs(n, m) << endl;

    return 0;
}