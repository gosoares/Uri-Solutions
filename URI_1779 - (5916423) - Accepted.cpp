#include <iostream>

using namespace std;

int main(){

    unsigned int t, n, p, maior, vezes, maiorSequencia;

    bool sequencia = true;

    cin >> t;

    for(int i = 1; i <= t; i++){

        maior = 0, vezes = 0, maiorSequencia = 0;

        cin >> n;
        while(n--){

            cin >> p;

            if(p == maior){
                if(sequencia)
                    vezes++;
                else{
                    vezes = 1;
                    sequencia = true;
                }
            }else if(p > maior){
                vezes = 1;
                maior = p;
                maiorSequencia = 1;
                sequencia = true;
            }else{
                if(vezes > maiorSequencia)
                    maiorSequencia = vezes;
                sequencia = false;
            }

        }

        cout << "Caso #" << i << ": " << max(maiorSequencia, vezes) << endl;

    }

    return 0;
}
