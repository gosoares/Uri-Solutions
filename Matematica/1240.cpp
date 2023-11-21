#include <iostream>

using namespace std;

int main(){

    unsigned long int a, b, p;

    int n;
    cin >> n;

    while(n--){
        cin >> a >> b;

        p = 10;
        while(p < b)
            p *= 10;

        if(a % p == b)
            cout << "encaixa" << endl;
        else
            cout << "nao encaixa" << endl;
    }

    return 0;
}
