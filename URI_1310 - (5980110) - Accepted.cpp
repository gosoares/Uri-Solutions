#include <iostream>

using namespace std;

int main() {

    int n, custoPorDia, i;
    int receita;

    int maxTerminandoAqui, maxAteAgora;

    while(cin >> n){
        cin >> custoPorDia;

        maxTerminandoAqui = 0, maxAteAgora = 0;
        for(i = 0; i < n; i++){
            cin >> receita;
            maxTerminandoAqui = max(0, maxTerminandoAqui + receita - custoPorDia);
            maxAteAgora = max(maxAteAgora, maxTerminandoAqui);
        }

        cout << maxAteAgora << endl;

    }

    return 0;
}
