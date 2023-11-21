#include <iostream>
#include <unordered_set>
 
using namespace std;
 
int main() {
 
    int n, m, x;
    cin >> n >> m;

    unordered_set<int> figs;

    for (int i = 0; i < m; i++) {
        cin >> x;
        figs.insert(x);
    }

    cout << n - figs.size() << endl;
 
    return 0;
}