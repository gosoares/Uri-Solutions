#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n, y, menor;

    cin >> n;

    int x[n];

    for(int i = 0; i < n; i++)
        cin >> x[i];

    menor = 0;
    for(int i = 1; i < n; i++){
        if(x[i] < x[menor])
            menor = i;
    }

    cout << "Menor valor: " << x[menor] << endl;
    cout << "Posicao: " << menor << endl;

    return 0;
}
