#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int t, bs, iv, ev, l, s;
    string nome;

    cin >> t;

    for(int i = 1; i <= t; i++){

        cin >> nome >> l;

        cout << "Caso #" << i << ": " << nome << " nivel " << l << endl;

        cin >> bs >> iv >> ev;
        s = (((iv + bs + sqrt(ev) / 8 + 50) * l) / 50) + 10;
        cout << "HP: " << s << endl;

        cin >> bs >> iv >> ev;
        s = (((iv + bs + sqrt(ev) / 8) * l) / 50) + 5;
        cout << "AT: " << s << endl;

        cin >> bs >> iv >> ev;
        s = (((iv + bs + sqrt(ev) / 8) * l) / 50) + 5;
        cout << "DF: " << s << endl;

        cin >> bs >> iv >> ev;
        s = (((iv + bs + sqrt(ev) / 8) * l) / 50) + 5;
        cout << "SP: " << s << endl;


    }

    return 0;
}
