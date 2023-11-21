#include <iostream>
 
using namespace std;
 
int main() {
 
    unsigned int l, c;
    cin >> l >> c;
    cout << ((l + c + 1) % 2) << endl;
 
    return 0;
}