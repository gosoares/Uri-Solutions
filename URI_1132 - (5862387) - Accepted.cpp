#include <iostream>

using namespace std;

int main() {

    int x, y, soma = 0;

    cin >> x >> y;

    if(x > y){
        int aux = x;
        x = y;
        y = aux;
    }

    for(; x <= y; x++){
        if(x % 13 != 0)
            soma += x;
    }

    cout << soma << endl;

    return 0;
}
