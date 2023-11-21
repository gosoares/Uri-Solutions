#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, r = 0, l, c;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> l >> c;

        if(l > c) r += c;
    }

    cout << r << endl;
 
    return 0;
}