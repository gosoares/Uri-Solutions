#include <iostream>

using namespace std;

int main() {

    int n, qtd;

    while(cin >> n){
        qtd = 0;

        while(n > 1){
            n /= 2;
            qtd++;
        }

        cout << qtd << endl;
    }

    return 0;
}
