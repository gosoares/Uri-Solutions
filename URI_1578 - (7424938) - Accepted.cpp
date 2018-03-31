#include <iostream>
#include <iomanip>

using namespace std;

int qtdDigitos(unsigned long long n){
    if(n == 0)
        return 1;

    int qtd = 0;

    while(n > 0){
        n /= 10;
        qtd++;
    }

    return qtd;

}

int main() {

    int qtdMatrizes, ordemMatriz;

    cin >> qtdMatrizes;

    for(int atual = 0; atual < qtdMatrizes; atual++){
        cin >> ordemMatriz;

        unsigned long long matriz[ordemMatriz][ordemMatriz], maiorQtdDigito[ordemMatriz];

        for(int i = 0; i < ordemMatriz; i++)
            maiorQtdDigito[i] = 0;

        for(int i = 0; i < ordemMatriz; i++){
            for(int j = 0; j < ordemMatriz; j++){
                cin >> matriz[i][j];

                matriz[i][j] *= matriz[i][j]; // tira o quadrado

                if(matriz[i][j] > maiorQtdDigito[j]){
                    maiorQtdDigito[j] = matriz[i][j];
                }
            }
        }

        for(int i =0; i < ordemMatriz; i++)
            maiorQtdDigito[i] = qtdDigitos(maiorQtdDigito[i]);

        if(atual > 0)
            cout << endl;

        cout << "Quadrado da matriz #" << atual + 4 << ":" << endl;

         for(int i = 0; i < ordemMatriz; i++){
            for(int j = 0; j < ordemMatriz; j++){
                    if(j > 0)
                        cout << " ";

                    cout << setw(maiorQtdDigito[j]) << matriz[i][j];
            }
            cout << endl;
         }

    }


    return 0;
}
