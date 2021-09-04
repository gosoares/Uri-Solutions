#include <iostream>

using namespace std;

int main() {

    bool retornou[10001];
    int qtdRetornou, i, n, r, x;

    while(cin >> n >> r){
        for(i = 1; i <= n; i++)
            retornou[i] = false;

        for(i = 0; i < r; i++){
            cin >> x;
            retornou[x] = true;
        }

        qtdRetornou = 0;
        for(i = 1; i <= n; i++){
            if(retornou[i])
                qtdRetornou++;
            else
                cout << i << ' ';
        }
        if(qtdRetornou == n)
            cout << '*';

        cout << endl;

    }

    return 0;
}
