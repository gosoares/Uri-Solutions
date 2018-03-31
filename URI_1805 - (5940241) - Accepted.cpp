#include <iostream>

using namespace std;

int main(){

    unsigned long long int a, b, soma;

    cin >> a >> b;

    soma = (b + a) * (b - a + 1) / 2;

    cout << soma << endl;

    return 0;
}
