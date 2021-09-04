#include <iostream>
 
using namespace std;
 
int main() {
 
    int p1, c1, p2, c2;
    cin >> p1 >> c1 >> p2 >> c2;

    int e = p2 * c2 - p1 * c1;

    cout << e / max(1, abs(e)) << endl;
 
    return 0;
}