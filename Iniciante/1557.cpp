#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n;

    while(true){
        cin >> n;
        if(n == 0)
            break;

        int maior = 1, t = 1;
        for(int i = 1; i < n; i++ )
            maior *= 4;
        while(maior / 10 > 0){
            maior /= 10;
            t++;
        }

        int inicio = 1, atual = 1;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n-1; j++){
                cout << right << setw(t) << atual << " ";
                atual *= 2;
            }
            cout << right << setw(t) << atual << endl;
            inicio *= 2;
            atual = inicio;
        }
        cout << endl;
    }

    return 0;
}
