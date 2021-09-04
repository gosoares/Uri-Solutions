#include <iostream>

using namespace std;

int main() {

    int n;
    string nome;
    double gd, nota, soma, menor, maior;

    cout.precision(2);
    cout << fixed;

    cin >> n;

    while(n--){

        cin >> nome;
        cin >> gd;

        soma = 0; menor = 10; maior = 0;

        for(int i = 0; i < 7; i++){
            cin >> nota;
            soma += nota;
            if(nota < menor)
                menor = nota;
            if(nota > maior)
                maior = nota;
        }

        soma -= maior + menor;

        cout << nome << " " << soma * gd << endl;

    }

    return 0;
}
