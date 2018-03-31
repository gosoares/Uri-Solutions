#include <iostream>

using namespace std;

int main() {

    float nota1, nota2;

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

    cout.precision(2);
    cout << "media = " << fixed << media << endl;


    return 0;
}
