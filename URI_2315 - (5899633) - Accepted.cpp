#include <iostream>

using namespace std;


// retorna a quantidade de dias que passou no ano
int getDias(int dia, int mes){
    mes--;
    int dias = (mes) * 30 + dia;

    switch(mes){
    case 11:
    case 10:
        dias++;
    case 9:
    case 8:
        dias++;
    case 7:
        dias++;
    case 6:
    case 5:
        dias++;
    case 4:
    case 3:
        dias++;
    case 2:
        dias-=2;
    case 1:
        dias++;
    }
    return dias;
}

int main() {

    int d1, m1, d2, m2;

    cin >> d1 >> m1;
    cin >> d2 >> m2;

    cout << getDias(d2, m2) - getDias(d1, m1) << endl;

}
