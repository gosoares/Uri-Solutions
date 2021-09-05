#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, v1, x;
    cin >> n >> v1;

    bool win = true;
    while (--n) {
        cin >> x;

        if (x > v1) win = false;
    }

    cout << (win ? 'S' : 'N') << endl;
 
    return 0;
}