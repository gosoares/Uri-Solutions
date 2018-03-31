#include <iostream>
#include <vector>

using namespace std;

bool verificaLinha(int matriz[9][9], int linha){
    vector<bool> apareceu(9, false);

    for(int i = 0; i < 9; i++){
        if(apareceu[matriz[linha][i]])
            return false;

        apareceu[matriz[linha][i]] = true;
    }

    return true;

}

bool verificaColuna(int matriz[9][9], int coluna){
    vector<bool> apareceu(9, false);

    for(int i = 0; i < 9; i++){
        if(apareceu[matriz[i][coluna]])
            return false;

        apareceu[matriz[i][coluna]] = true;
    }

    return true;
}

bool verificaQuadrado(int matriz[9][9], int quadrado){
    vector<bool> apareceu(9, false);

    int x = quadrado - (quadrado % 3);
    int y = (quadrado % 3) * 3;

    for(int i = x; i < x + 3; i++){
        for(int j = y; j < y+3; j++){
            if(apareceu[matriz[i][j]])
                return false;

            apareceu[matriz[i][j]] = true;
        }
    }

    return true;
}

bool verificaSudoku(int matriz[9][9]){

    for(int i = 0; i < 9; i++){
        if(verificaLinha(matriz, i) == false){
            return false;
        }
        if(verificaColuna(matriz, i) == false){
            return false;
        }
        if(verificaQuadrado(matriz, i) == false)
            return false;
    }

    return true;

}

int main() {

    int n;
    cin >> n;

    for(int caso = 1; caso <= n; caso++){

        int matriz[9][9];

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                cin >> matriz[i][j];
            }
        }

        cout << "Instancia " << caso << endl;
        if(verificaSudoku(matriz))
            cout << "SIM" << endl;
        else
            cout << "NAO" << endl;

        cout << endl;

    }

    return 0;
}
