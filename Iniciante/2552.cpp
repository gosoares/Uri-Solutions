#include <iostream>

using namespace std;

int main() {

    int linhas, colunas;

    while(cin >> linhas >> colunas){

        int tabuleiro[linhas][colunas];

        for(int i = 0; i < linhas; i++){
            for(int j = 0; j < colunas; j++){
                cin >> tabuleiro[i][j];
            }
        }

        for(int i = 0; i < linhas; i++){
            for(int j = 0; j < colunas; j++){
                if(tabuleiro[i][j] == 1){
                    cout << '9';
                }else{
                    int adjacentes = 0;

                    if(i > 0 && tabuleiro[i-1][j] == 1)
                        adjacentes++;

                    if(i + 1 < linhas && tabuleiro[i+1][j] == 1)
                        adjacentes++;

                    if(j > 0 && tabuleiro[i][j-1] == 1)
                        adjacentes++;

                    if(j + 1 < colunas && tabuleiro[i][j+1] == 1)
                        adjacentes++;

                    cout << adjacentes;

                }
            }
            cout << endl;
        }


    }

    return 0;
}
