#include <iostream>

using namespace std;

int main() {

    int x, soma;

    while(true){

        cin >> x;
        if(x == 0)
            break;

        if(x % 2 != 0)
            x++;

        soma = 0;
        for(int i = 0; i < 5; i++, x+=2)
            soma += x;

        cout << soma << endl;

    }

    return 0;
}
