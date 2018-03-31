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
        dias--;
    case 1:
        dias++;
    }
    return dias;
}

int main() {

    int mes, dia, natal = getDias(25, 12), dias;

    while(cin >> mes >> dia){

        dias = natal - getDias(dia, mes);

        if(dias > 1)
            cout << "Faltam " << dias << " dias para o natal!" << endl;
        else if(dias < 0)
            cout << "Ja passou!" << endl;
        else if(dias == 1)
            cout << "E vespera de natal!" << endl;
        else
            cout << "E natal!" << endl;

    }

    return 0;
}
