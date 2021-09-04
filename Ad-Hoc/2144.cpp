#include <iostream>

using namespace std;

int main(){

    int w1, w2, r, i;
    double m, total = 0;

    for(i = 0; true; i++){
        cin >> w1 >> w2 >> r;
        if(w1 == 0 && w2 == 0 && r == 0)
            break;

        m = (w1 + w2) * (1 + (r/30.0)) / 2.0;
        total += m;

        if(m < 13)
            cout << "Nao vai da nao" << endl;
        else if(m < 14)
            cout << "E 13" << endl;
        else if(m < 40)
            cout << "Bora, hora do show! BIIR!" << endl;
        else if(m <= 60)
            cout << "Ta saindo da jaula o monstro!" << endl;
        else
            cout << "AQUI E BODYBUILDER!!" << endl;

    }

    if(total/i > 40)
        cout << endl << "Aqui nois constroi fibra rapaz! Nao e agua com musculo!" << endl;

    return 0;
}
