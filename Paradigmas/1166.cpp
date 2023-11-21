#include <iostream>
#include <unordered_set>
#include <vector>

#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;

    cin >> t;

    unordered_set<unsigned int> tops;
    vector<unsigned int> quantities(51);
    unordered_set<unsigned int>::iterator it;

    long long towers = 0, next = 1, search;

    while (t--) {
        cin >> n;

        if (n > 50) {
            cout << -1 << endl;
            continue;
        }

        while (towers < n) {
            towers++;
            tops.insert(next++);

            long long square = towers * towers;
            while ((it = tops.find(square - next)) != tops.end()) {
                tops.erase(it);
                tops.insert(next);
                next++;
            }
            quantities[towers] = next - 1;
        }

        cout << quantities[n] << endl;
    }

    return 0;
}