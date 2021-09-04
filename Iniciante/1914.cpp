#include <iostream>

using namespace std;

int main() {

    int qt;

    cin >> qt;

    string nome1, nome2, escolha1, escolha2;

    unsigned long long int n, soma;

    while(qt--){

        cin >> nome1 >> escolha1 >> nome2 >> escolha2;

        cin >> soma >> n;

        soma += n;

        if((soma % 2 == 0 && escolha1 == "PAR") || (soma % 2 == 1 && escolha1 == "IMPAR"))
            cout << nome1 << endl;
        else
            cout << nome2 << endl;

    }

    return 0;
}
