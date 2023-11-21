#include <iomanip>
#include <iostream>
#include <vector>

#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed << setprecision(2);

    int n;

    while (cin >> n && n > 0) {
        vector<double> values(n);
        double sum = 0;
        for (double& v : values) {
            cin >> v;
            sum += v;
        }
        double mean = sum / n;

        double diffs = 0;
        for (auto v : values) {
            diffs += abs(mean - v);
        }

        cout << '$' << diffs / 2 << endl;
    }

    return 0;
}