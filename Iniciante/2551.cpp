#include <iostream>

using namespace std;

int main() {

    int treinos, duracao, distancia;
    double recorde;

    while(cin >> treinos){

        recorde = 0;
        for(int treino = 1; treino <= treinos; treino++){
            cin >> duracao >> distancia;

            if((double) distancia / duracao > recorde){
                recorde = (double) distancia / duracao;
                cout << treino << endl;
            }
        }

    }

    return 0;
}
