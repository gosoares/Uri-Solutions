#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
 
    int n;
    cin >> n;

    vector<int> fib(n);
    fib[0] = 1;
    if(n > 1)
        fib[1] = 1;

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    cout << fib.back();
    for (int i = n - 2; i >= 0; i--) {
        cout << " " << fib[i];
    }
    cout << endl;
 
    return 0;
}