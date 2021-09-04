#include <iostream>

using namespace std;

int main() {

    int notas[] = {2, 5, 10, 20, 50, 100};

    int n, troco;

    while(true){

        cin >> n >> troco;
        if(n == 0 && troco == 0)
            break;

        troco -= n;

        bool possible = false;

        for(int i = 0; i < 6 && troco > notas[i] && !possible; i++){

            for(int j = i; j < 6; j++){
                if(troco == notas[i] + notas[j]) {
                    possible = true;
                    break;
                }
            }

        }

        if(!possible)
            cout << "im";

        cout << "possible" << endl;


    }

    return 0;
}
