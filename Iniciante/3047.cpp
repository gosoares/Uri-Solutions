#include <iostream>
 
using namespace std;
 
int main() {
 
    int m, a, b;

    cin >> m >> a >> b;

    cout << max(a, b, m - a - b) << endl;
 
    return 0;
}