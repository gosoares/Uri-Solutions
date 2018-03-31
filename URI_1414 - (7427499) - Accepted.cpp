#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int t, n, soma, pontos;
    string time;


    while(cin >> t >> n && t > 0){

        soma = 0;

        while(t--){
            cin >> time >> pontos;
            soma += pontos;
        }

        cout << 3*n - soma << endl;

    }

}
