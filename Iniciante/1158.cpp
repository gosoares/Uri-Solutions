#include <iostream>

using namespace std;

int main() {

    int n, x, y, soma;

    cin >> n;

    while(n--){

        cin >> x >> y;

        if(x % 2 == 0)
            x++;

        soma = 0;
        for(int i = 0; i < y; i++, x +=2)
            soma += x;

        cout << soma << endl;


    }

    return 0;
}
