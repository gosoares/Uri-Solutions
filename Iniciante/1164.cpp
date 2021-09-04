#include <iostream>

using namespace std;

int main() {

    int n, x, soma;

    cin >> n;

    while(n--){

        cin >> x;

        soma = 0;
        for(int i = x/2; i > 0 && soma < x; i--){
            if(x % i == 0)
                soma += i;
        }

        if(soma == x)
            cout << x << " eh perfeito" << endl;
        else
            cout << x << " nao eh perfeito" << endl;

    }

    return 0;
}
