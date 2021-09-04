#include <iostream>

using namespace std;

unsigned int fib(unsigned int, int *);

int main(){

    int n, x, c;
    unsigned int r;

    cin >> n;

    while(n--){
        cin >> x;
        c = -1;
        r = fib(x, &c);
        cout << "fib(" << x << ") = " << c << " calls = " << r << endl;
    }

    return 0;
}

unsigned int fib(unsigned int n, int *c){
    (*c)++;
    if(n < 2)
        return n;
    return fib(n-1, c) + fib(n-2, c);
}
