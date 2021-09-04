#include <iostream>

using namespace std;

int main() {

    int a = 0, g = 0, d = 0, le;


    do{

        cin >> le;

        if(le == 1)
            a++;
        else if(le == 2)
            g++;
        else if(le == 3)
            d++;

    }while(le != 4);

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << a << endl;
    cout << "Gasolina: " << g << endl;
    cout << "Diesel: " << d << endl;

    return 0;
}
