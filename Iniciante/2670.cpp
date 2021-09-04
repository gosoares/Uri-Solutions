#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
 
    unsigned int a1, a2, a3;
    cin >> a1 >> a2 >> a3;

    unsigned int p1 = a2 + 2 * a3,
        p2 = a1 + a3,
        p3 = 2 * a1 + a2;

    cout << 2 * min({p1, p2, p3}) << endl;
    return 0;
}