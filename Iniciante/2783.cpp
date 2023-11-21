#include <iostream>
#include <unordered_set>
 
using namespace std;
 
int main() {
 
    int n, c, m, x;
    cin >> n >> c >> m;

    unordered_set<int> stamped;

    for (int i = 0; i < c; i++) {
        cin >> x;
        stamped.insert(x);
    }

    for (int i = 0; i < m; i++) {
        cin >> x;
        stamped.erase(x);
    }

    cout << stamped.size() << endl;
 
    return 0;
}