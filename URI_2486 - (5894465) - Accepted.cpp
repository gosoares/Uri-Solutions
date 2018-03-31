#include <iostream>

using namespace std;

int main(){

    int t, qtd, total;

    string alimento;

    while(true){

        cin >> t;

        if(t == 0)
            break;

        total = 0;
        while(t--){

            cin >> qtd;

            getline(cin, alimento);

            if(alimento == " suco de laranja")
                total += qtd*120;
            else if(alimento == " morango fresco")
                total += qtd*85;
            else if(alimento == " mamao")
                total += qtd*85;
            else if(alimento == " goiaba vermelha")
                total += qtd*70;
            else if(alimento == " manga")
                total += qtd*56;
            else if(alimento == " laranja")
                total += qtd*50;
            else
                total += qtd*34;

        }

        if(total < 110)
            cout << "Mais " << 110 - total << " mg" << endl;
        else if(total > 130)
            cout << "Menos " << total - 130 << " mg" << endl;
        else
            cout << total << " mg" << endl;

    }

    return 0;
}
