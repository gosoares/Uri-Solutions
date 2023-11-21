#include <iostream>

using namespace std;

int main() {

    int n, t, atingido;
    string pulos;
    cin >> n;

    while(n--){

        cin >> t;

        int tiros[t];

        for(int i = 0; i < t; i++)
            cin >> tiros[i];

        cin.ignore();

        getline(cin, pulos);

        atingido = 0;

        for(int i = 0; i < t; i++){
            if( (pulos[i] == 'S' && tiros[i] <= 2) || (pulos[i] == 'J' && tiros[i] > 2) )
                atingido++;
        }

        cout << atingido << endl;
    }

    return 0;
}
