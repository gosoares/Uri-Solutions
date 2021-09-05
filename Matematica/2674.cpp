#include <iostream>
 
using namespace std;
 
bool isPrime(int n) { 
    if (n == 1) return false;
    if (n == 2) return true;
    if (n%2 == 0) return false;
    for (int i = 3; i*i <= n; i +=2 ) {
        if(n%i == 0) return false;
    }
    return true;
}

bool isDigitsPrime(int n) {
    int x;
    while (n > 0) {
        x = n % 10;
        if(!isPrime(x))
            return false;
        n /= 10;
    }
    return true;
}

int main() {
 
    int n;

    while (cin >> n) {
        if (isPrime(n)) {
            if (isDigitsPrime(n)) {
                cout << "Super" << endl;
            } else {
                cout << "Primo" << endl;
            }
        } else {
            cout << "Nada" << endl;
        }
    }
 
    return 0;
}