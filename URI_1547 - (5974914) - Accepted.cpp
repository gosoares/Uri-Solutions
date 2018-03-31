#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int n, qt, s, i, x, menor, iMenor;

    cin >> n;

    while(n--){
        cin >> qt >> s;

        menor = 9999;
        for(i = 1; i <= qt; i++){
            cin >> x;

            if(abs(x-s) < menor){
                iMenor = i;
                menor = abs(x-s);
            }
        }

        cout << iMenor << endl;

    }

    return 0;
}
