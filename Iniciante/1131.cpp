#include <iostream>

using namespace std;

int main() {

    int inter = 0, gremio = 0, empates = 0, grenais = 0, continuar, a, b;

    do{
        grenais++;
        cin >> a >> b;

        if(a > b)
            inter++;
        else if(a < b)
            gremio++;
        else
            empates++;

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> continuar;

    }while(continuar == 1);

    cout << grenais << " grenais" << endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << empates << endl;

    if(inter > gremio)
        cout << "Inter venceu mais" << endl;
    else if(inter < gremio)
        cout << "Gremio venceu mais" << endl;
    else
        cout << "Nao houve vencedor" << endl;


    return 0;
}
