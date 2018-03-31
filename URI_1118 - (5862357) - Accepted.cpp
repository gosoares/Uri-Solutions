#include <iostream>

using namespace std;

int main() {

    int continuar;
    float nota1, nota2, media;

    cout << fixed;
    cout.precision(2);

    do{

        cin >> nota1;

        while(nota1 < 0 || nota1 > 10){
            cout << "nota invalida" << endl;
            cin >> nota1;
        }

        cin >> nota2;

        while(nota2 < 0 || nota2 > 10){
            cout << "nota invalida" << endl;
            cin >> nota2;
        }

        float media = (nota1 + nota2) / 2;

        cout << "media = " << media << endl;

        do{
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> continuar;
        }while(continuar != 1 && continuar != 2);


    }while(continuar == 1);

    return 0;
}
