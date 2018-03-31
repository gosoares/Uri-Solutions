#include <iostream>

using namespace std;

int main() {

    string cpf;

    while(cin >> cpf){

        unsigned long soma1 = (cpf[0] - '0') + 2*(cpf[1] - '0') + 3*(cpf[2] - '0') + 4*(cpf[4] - '0') + 5*(cpf[5] - '0') + 6*(cpf[6] - '0') + 7*(cpf[8] - '0') + 8*(cpf[9] - '0') + 9*(cpf[10] - '0');
        unsigned long soma2 = 9*(cpf[0] - '0') + 8*(cpf[1] - '0') + 7*(cpf[2] - '0') + 6*(cpf[4] - '0') + 5*(cpf[5] - '0') + 4*(cpf[6] - '0') + 3*(cpf[8] - '0') + 2*(cpf[9] - '0') + 1*(cpf[10] - '0');

        soma1 %= 11;
        soma2 %= 11;

        if(soma1 == 10)
            soma1 = 0;
        if(soma2 == 10)
            soma2 = 0;

        if(soma1 == cpf[12] - '0' && soma2 == cpf[13] - '0')
            cout << "CPF valido" << endl;
        else
            cout << "CPF invalido" << endl;

    }

    return 0;
}
