#include <iostream>

using namespace std;

unsigned long long int quadrados(unsigned long long int n){
    if(n == 1)
        return 1;

    return n * n + quadrados(n-1);
}

int main() {

    unsigned long long int n;

    while(true){
        cin >> n;
        if(n == 0)
            break;

        cout << quadrados(n) << endl;
    }

    return 0;
}
