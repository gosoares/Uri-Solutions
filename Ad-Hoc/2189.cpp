#include <iostream>

using namespace std;

int main() {

    int n, x, ganhador;

    for(int caso = 1; cin >> n && n > 0; caso++){

        for(int i = 1; i <= n; i++){
            cin >> x;

            if(x == i){
                ganhador = i;
            }
        }

        cout << "Teste " << caso << endl;
        cout << ganhador << endl << endl;

    }

    return 0;
}
