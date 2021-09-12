#include <iostream>
#include <queue>
#include <unordered_map>
#include <unordered_set>

#define endl '\n'

using namespace std;

typedef long long ll;

ll bfs(int n, int m, const unordered_set<int>& proibited) {
    unordered_map<ll, ll> steps;

    queue<int> values;
    values.push(n);
    steps[n] = 1;
    ll channel[5];  // operation results
    int k;

    while (!values.empty()) {
        ll value = values.front();
        values.pop();

        channel[0] = value - 1;
        channel[1] = value + 1;
        channel[2] = value * 2;
        channel[3] = value * 3;
        if (value % 2 == 0) {
            channel[4] = value / 2;
            k = 5;
        } else {
            k = 4;
        }

        for (int i = 0; i < k; i++) {
            if (channel[i] == m) return steps[value];

            if (channel[i] > 0 && channel[i] <= 100000ll) {
                auto& s = steps[channel[i]];
                if (s == 0 &&
                    proibited.find(channel[i]) ==
                        proibited.end()) {  // not cheched value before
                    s = steps[value] + 1;
                    values.push(channel[i]);
                }
            }
        }
    }

    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int o, d, k, x;

    while (cin >> o >> d >> k && o > 0) {
        unordered_set<int> proibited;
        while (k--) {
            cin >> x;
            proibited.insert(x);
        }

        cout << bfs(o, d, proibited) << endl;
    }

    return 0;
}