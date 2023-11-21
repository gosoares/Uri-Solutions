#include <iostream>
 
using namespace std;
 
int main() {
 
    int l, c;
    cin >> l >> c;

    int t1 = (l * c) + (l - 1) * (c - 1);
    int t2 = 2 * (l - 1) + 2 * (c - 1);
 
    cout << t1 << endl << t2 << endl;
    
    return 0;
}