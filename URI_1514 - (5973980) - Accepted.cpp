#include <iostream>

using namespace std;

int main() {

    int n, m, i, j, e, soma, c;

    while(true){
        cin >> n >> m;
        if(n == 0 && m == 0)
            break;

        int somaLinhas[n];
        int somaColunas[m];
        for(i = 0; i < n; i++)
            somaLinhas[i] = 0;
        for(i = 0; i < m; i++)
            somaColunas[i] = 0;
        c = 0; // caracteristicas não alcançadas

        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                cin >> e;
                somaLinhas[i] += e;
                somaColunas[j] += e;
            }
        }

        for(i = 0; i < n; i++){
            if(somaLinhas[i] == m){ // alguem resolveu todos os problemas
                c++;
                break;
            }
        }

        for(i = 0; i < m; i++){
            if(somaColunas[i] == 0){ // ninguem resolveu um problema
                c++;
                break;
            }
        }

        for(i = 0; i < m; i++){
            if(somaColunas[i] == n){ // algum problema foi resolvido por todos
                c++;
                break;
            }
        }

         for(i = 0; i < n; i++){
            if(somaLinhas[i] == 0){ // alguem não resolveu nenhum problema
                c++;
                break;
            }
        }

        cout << 4-c << endl;

    }

    return 0;
}
