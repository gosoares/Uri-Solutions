#include <iostream>

using namespace std;

int main() {

    int x, z, soma;

    cin >> x;

    do{
        cin >> z;
    }while(z <= x);

    int i;
    for(i = 0, soma = 0; soma < z; i++)
        soma += x++;

    cout << i << endl;

    return 0;
}
