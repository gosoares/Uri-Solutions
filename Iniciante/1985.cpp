#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int p, nr, qtd;

    double valor = 0;

    cin >> p;

    while(p--){
        cin >> nr >> qtd;

        if(nr == 1001)
            valor += qtd*1.5;
        else if(nr == 1002)
            valor += qtd*2.5;
        else if(nr == 1003)
            valor += qtd*3.5;
        else if(nr == 1004)
            valor += qtd*4.5;
        else
            valor += qtd*5.5;

    }

    cout << fixed << setprecision(2) << valor << endl;

    return 0;
}
