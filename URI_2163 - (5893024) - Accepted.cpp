#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n, m;
    bool encontrou = false;

    cin >> n >> m;

    int terreno[n][m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> terreno[i][j];

    for(int i = 1; i < n-1; i++){
        for(int j = 1; j < m-1; j++){
            if(terreno[i][j] == 42 && terreno[i-1][j-1] == 7 && terreno[i-1][j] == 7 && terreno[i-1][j+1] == 7 && terreno[i][j-1] == 7 && terreno[i][j+1] == 7 && terreno[i+1][j-1] == 7 && terreno[i+1][j] == 7 && terreno[i+1][j+1] == 7){
                cout << i+1 << " " << j+1 << endl;
                encontrou = true;
                i = 99999;
                break;
            }
        }
    }

    if(!encontrou)
        cout << "0 0" << endl;

}
