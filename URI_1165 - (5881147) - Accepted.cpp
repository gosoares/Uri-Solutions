#include <iostream>

using namespace std;

int main() {

    int n, x;

    bool ehPrimo;

    cin >> n;

    while(n--){

        cin >> x;

        if(x <= 1)
            ehPrimo = false;
        else
            ehPrimo = true;

        for(int i = 2; i*i <= x; i++){
            if(x % i == 0){
                ehPrimo = false;
                break;
            }
        }

        if(ehPrimo)
            cout << x << " eh primo" << endl;
        else
            cout << x << " nao eh primo" << endl;


    }

    return 0;
}
