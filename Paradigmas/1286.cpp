#include <iostream>

using namespace std;

int main(){

    int n, p;

    while(cin >> n){
        if(n == 0)
            break;

        int tempo[n+1]; // lucro
        int qtdPizzas[n+1]; // custo / peso

        cin >> p;

        for(int i = 1; i <= n; i++){
            cin >> tempo[i] >> qtdPizzas[i];
        }


        int maximo[n + 1][p + 1];
        /*
            maximo[i][j] armazena o valor maximo para a mochila com capacidade(qtdPizza) j, usando os produtos [1, i]
        */

        for(int i = 0; i <= p; i++)
            maximo[0][i] = 0;

        for(int pedidoAtual = 1; pedidoAtual <= n; pedidoAtual++){
            for(int capacidadeAtual = 0; capacidadeAtual <= p; capacidadeAtual++){
                int naoUsando = maximo[pedidoAtual - 1][capacidadeAtual];

                maximo[pedidoAtual][capacidadeAtual] = naoUsando;

                if(qtdPizzas[pedidoAtual] <= capacidadeAtual){
                    int usando = maximo[pedidoAtual - 1][capacidadeAtual - qtdPizzas[pedidoAtual]] + tempo[pedidoAtual];

                    if(usando > naoUsando)
                        maximo[pedidoAtual][capacidadeAtual] = usando;

                }

            }
        }

        cout << maximo[n][p] << " min." << endl;

    }

    return 0;
}
