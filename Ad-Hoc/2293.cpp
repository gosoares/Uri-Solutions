#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
 
    int n, m, x;
    cin >> n >> m;

    vector<int> sumLines(n, 0);
    vector<int> sumColumns(m, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> x;
            sumLines[i] += x;
            sumColumns[j] += x;
        }
    }

    cout << max(*max_element(sumLines.begin(), sumLines.end()), *max_element(sumColumns.begin(), sumColumns.end())) << endl;
 
    return 0;
}