#include <iostream>
 
using namespace std;
 
int main() {
 
    int k;
    cin >> k;

    int fib1 = 5, fib2 = 8, fibnot = 2;

    while (k > 0) {
        fibnot += 2; k--;

        while (k > 0 && fibnot + 1 != fib1) {
            fibnot++; k--;   
        }

        fib1 = fib1 + fib2;
        swap(fib1, fib2);
    }

    cout << fibnot << endl;
 
    return 0;
}