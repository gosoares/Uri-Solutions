#include <iostream>

using namespace std;

/* void mudaLampada(string& lampadas, int p){
    if(lampadas[p] == 'X')
        lampadas[p] = 'O';
    else{
        lampadas[p] = 'X';
        if(p + 1 < lampadas.size())
            mudaLampada(lampadas, p+1);
    }
}

int main() {

    string lampadas;
    int n, c;

    cin >> n;

    while(n--){
        cin >> lampadas >> c;

        while(c--)
            mudaLampada(lampadas, 0);

        cout << lampadas << endl;
    }


    return 0;
}*/
int main() {

    int n, s, b, a, st = 0, bt = 0, att = 0, ss = 0, bs = 0, as = 0;
    string nome;

    cin >> n;

    while(n--){
        cin.ignore();
        cin >> nome;

        cin >> s >> b >> a;
        st += s;
        bt += b;
        att += a;

        cin >> s >> b >> a;
        ss += s;
        bs += b;
        as += a;
    }

    cout.precision(2);
    cout << fixed;

    cout << "Pontos de Saque: " << 100.0 * ss / st << " %." << endl;
    cout << "Pontos de Bloqueio: " << 100.0 * bs / bt << " %." << endl;
    cout << "Pontos de Ataque: " << 100.0 * as / att << " %." << endl;

    return 0;
}
