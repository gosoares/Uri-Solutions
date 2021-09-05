#include <iostream>
 
using namespace std;
 
int main() {
 
    int x, y;
    cin >> x >> y;

    cout << ((x >= 0 && x <= 432 && y >= 0 && y <= 468) ? "dentro" : "fora") << endl;
 
    return 0;
}