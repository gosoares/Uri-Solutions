#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    
    int v, t, x;
    cin >> v >> t;

    while (t--) {
        cin >> x;

        v = min(v + x, 100);
        v = max(v, 0);
    }

    cout << v << endl;
 
    return 0;
}