#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<int> sequence(n);

        for (int& x : sequence) {
            cin >> x;
            x--;
        }

        int swaps = 0;

        for (int i = 0; i < n; i++) {
            while (sequence[i] != i) {
                swap(sequence[i], sequence[sequence[i]]);
                swaps++;
            }
        }

        cout << swaps << endl;
    }

    return 0;
}