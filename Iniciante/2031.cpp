#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    string j1, j2;

    while(n--){
        cin >> j1;
        cin >> j2;

        if((j1 == "ataque" && j2 != "ataque") || (j1 == "pedra" && j2 == "papel"))
            cout << "Jogador 1 venceu" << endl;
        else if((j2 == "ataque" && j1 != "ataque") || (j2 == "pedra" && j1 == "papel"))
            cout << "Jogador 2 venceu" << endl;
        else if(j1 == "papel" && j2 == "papel")
            cout << "Ambos venceram" << endl;
        else if(j1 == "pedra" && j2 == "pedra")
            cout << "Sem ganhador" << endl;
        else if(j1 == "ataque" && j2 == "ataque")
            cout << "Aniquilacao mutua" << endl;


    }

    return 0;
}
