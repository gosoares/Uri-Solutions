#include <iostream>

using namespace std;

int main() {

    unsigned int soma = 0, n =0;
    int idade;

    while(true){

        cin >> idade;
        if(idade < 0)
            break;

        soma += idade;
        n++;

    }

    cout.precision(2);

    cout << fixed << (float) soma / n << endl;

    return 0;
}
