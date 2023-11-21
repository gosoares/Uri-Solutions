#include <iostream>

using namespace std;

int main() {

    int n, numeros, caso = 0;

    while(cin >> n){

        caso++;

        numeros = 1;
        for(int i = 1; i <= n; i ++)
            numeros += i;

        cout << "Caso " << caso << ": " << numeros << " numero";
        if(n > 0)
            cout << "s";
        cout << endl;

        if(n > 0)
            cout << "0 ";

        for(int i = 1; i < n; i++){
            for(int j = 0; j < i; j++)
                cout << i << " ";
        }

        for(int i = 1; i < n; i ++){
            cout << n << " ";
        }
        cout << n << endl << endl;

    }

    return 0;
}
