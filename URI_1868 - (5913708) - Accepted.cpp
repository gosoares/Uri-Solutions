#include <iostream>
#include <vector>

using namespace std;

void imprime(vector< vector<char> > quadro, int n){

   for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << quadro[i][j];
        }
        cout << endl;
   }
    cout << '@' << endl;
}

int main() {

    int n, x, y, i, j;

    while(true){
        cin >> n;
        if(n == 0)
            break;

        vector< vector<char> > quadro(n, vector<char>(n));

        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++)
                quadro[i][j] = 'O';
        }

        x = n/2;
        y = x;

        quadro[x][y] = 'X';

        imprime(quadro, n);

        for(i = 1; i <= n/2; i++){
            quadro[x][y] = 'O';
            y++;
            quadro[x][y] = 'X';

            imprime(quadro, n);

            // move para cima
            j = i*2 - 1;
            while(j--){
                quadro[x][y] = 'O';
                x--;
                quadro[x][y] = 'X';
                imprime(quadro, n);
            }

            // move para a esquerda
            j = 2*i;
            while(j--){
                quadro[x][y] = 'O';
                y--;
                quadro[x][y] = 'X';
                imprime(quadro, n);
            }

            //move para baixo
            j = 2*i;
            while(j--){
                quadro[x][y] = 'O';
                x++;
                quadro[x][y] = 'X';
                imprime(quadro, n);
            }

            j = 2*i;
            while(j--){
                quadro[x][y] = 'O';
                y++;
                quadro[x][y] = 'X';
                imprime(quadro, n);
            }
        }


    }

    return 0;
}
