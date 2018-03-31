#include <iostream>

using namespace std;

int main() {

    int m, n;

    cin >> m >> n;

    int partidas[m][n];

    for(int i = 0;i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> partidas[i][j];

    int qtd = 0;
    bool todas;

    for(int i = 0;i < m; i++){
        todas = true;
        for(int j = 0; j < n; j++){
            if(partidas[i][j] == 0){
                todas = false;
                break;
            }
        }
        if(todas)
            qtd++;
    }

    cout << qtd << endl;

    return 0;
}
