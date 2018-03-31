#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    unsigned long int fib[41];
    fib[0] = 1;
    fib[1] = 1;

    for(int i = 2; i <= 40; i++)
        fib[i] = fib[i-1] + fib[i-2];

    int n;

    while(true){
        cin >> n;
        if(n==0)
            break;

        cout << fib[n] << endl;
    }


    return 0;
}
