#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
 
    int ca, ba, pa, cr, br, pr;
    cin >> ca >> ba >> pa >> cr >> br >> pr;

    cout << max(0, cr - ca) + max(0, br - ba) + max(0, pr - pa) << endl;
 
    return 0;
}