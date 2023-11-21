#include <iostream>
#include <math.h>
#include <map>

using namespace std;

int main() {

    int n, erros, falsas;
    string nome, assinatura;
    map<string,string> mapa;


    while(true){

        cin >> n;
        cin.ignore();
        if(n == 0)
            break;

        mapa.clear();

        while(n--){
            cin >> nome >> assinatura;
            mapa[nome] = assinatura;
        }

        cin >> n;
        cin.ignore();

        falsas = 0;
        while(n--){
            cin >> nome >> assinatura;

            erros = 0;
            for(int i = 0; i < nome.size(); i++){
                if(assinatura[i] != mapa[nome][i])
                    erros++;
            }

            if(erros > 1)
                falsas++;

        }

        cout << falsas << endl;

    }


}
