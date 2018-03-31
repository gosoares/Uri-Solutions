#include <iostream>

using namespace std;

int main(){

    unsigned long int decimal;
    char hexa[10];

    cin >> decimal;

    int i, n;
    for(i = 0; decimal > 0; i++){
        n = decimal % 16;
        decimal /= 16;

        if(n < 10)
            hexa[i] = n + '0';
        else
            hexa[i] = n - 10 + 'A';

    }

    for(i--; i >= 0; i--)
        cout << hexa[i];

    cout << endl;

    return 0;
}
