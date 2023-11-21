#include <iostream>

using namespace std;

int main() {

    int q, d, p, pag;

    while(cin >> q){
        if(q == 0)
            break;

        cin >> d >> p;

        pag = (q*d*p) / (p-q);

        cout << pag << " pagina";

        if(pag != 1)
            cout << "s";

        cout << endl;

    }


    return 0;
}

/*
    qtd = q*dias
    qtd = p*(dias - d)

    q*dias = p*(dias - d)
    q*dias = p*dias - p*d

    q*dias - p*dias = -p*d
    dias*(q - p) = -p*d
    dias = (-p*d)/(q-p)

    dias = (p*d)/(p-q)
    qtd = (q*p*d)/(p-q)

*/
