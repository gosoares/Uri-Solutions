#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n, h1, h2;

    bool valida = true, maior = true;

    cin >> n;

    cin >> h1;
    cin >> h2;

    if(h1 < h2)
        maior = false;
    else if(h1 == h2)
        valida = false;

    n--;
    while(--n){
        h1 = h2;
        cin >> h2;

        if((maior && h1 >= h2) || (!maior && h1 <= h2))
            valida = false;

        maior = !maior;
    }

    if(valida)
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}
