#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, t, v, d = 0;
    cin >> n;

    while (n--) {
        cin >> t >> v;
        d += t * v;
    }

    cout << d << endl;
 
    return 0;
}