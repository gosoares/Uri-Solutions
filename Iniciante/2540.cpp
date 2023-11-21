#include <iostream>

using namespace std;

int main() {

    int n, v, votos;

    while(cin >> n && n > 0){

        votos = 0;

        for(int i = 0; i < n; i++){
            cin >> v;
            votos += v;
        }

        cout << ((double) votos / n >= (2.0/3) ? "impeachment" : "acusacao arquivada") << endl;

    }

    return 0;
}
