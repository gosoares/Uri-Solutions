#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, v = 7;
    cin >> n;

    if (n > 100) {
        v += (n - 100) * 5;
        n = 100;
    }

    if (n > 30) {
        v += (n - 30) * 2;
        n = 30;
    }

    if (n > 10) {
        v += (n - 10);
    }

    cout << v << endl;
 
    return 0;
}