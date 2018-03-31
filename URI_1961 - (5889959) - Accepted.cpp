#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int p, n;
    int alturaAtual, alturaAnterior;
    bool pulou = true;

    cin >> p >> n;

    cin >> alturaAnterior;
    n--;

    while(n--){

        cin >> alturaAtual;

        if(abs(alturaAtual - alturaAnterior) > p)
            pulou = false;

        alturaAnterior = alturaAtual;

    }

    if(pulou)
        cout << "YOU WIN" << endl;
    else
        cout << "GAME OVER" << endl;


    return 0;
}
