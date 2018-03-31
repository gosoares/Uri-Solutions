#include <iostream>

using namespace std;

bool ehPossivel(int quintal[5][5], bool visitado[5][5], int i, int j){
    if(quintal[i][j] == 1 || visitado[i][j] || i < 0 || i > 4 || j < 0 || j > 4)
        return false;

    if(i == 4 && j == 4)
        return true;

    visitado[i][j] = true;

    if(ehPossivel(quintal, visitado, i, j-1) ||
       ehPossivel(quintal, visitado, i, j+1) ||
       ehPossivel(quintal, visitado, i-1, j) ||
       ehPossivel(quintal, visitado, i+1, j))
        return true;
    else
        return false;


}


int main() {

    int t, quintal[5][5];
    bool visitado[5][5];

    cin >> t;

    while(t--){

        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                cin >> quintal[i][j];
                visitado[i][j] = false;
            }
        }

        cout << (ehPossivel(quintal, visitado, 0, 0) ? "COPS" : "ROBBERS" ) << endl;


    }

    return 0;
}
