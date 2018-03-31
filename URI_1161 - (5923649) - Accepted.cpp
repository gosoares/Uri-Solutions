#include <iostream>

using namespace std;

unsigned long long int fatorial(unsigned long long int n){
    if(n == 0)
        return 1;

    return n * fatorial(n-1);

}

int main(){

    unsigned long long int m, n;

    while(cin >> m >> n)
        cout << fatorial(m) + fatorial(n) << endl;

    return 0;
}
