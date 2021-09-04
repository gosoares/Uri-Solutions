#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int par[5], impar[5], p = 0, i = 0, n;

    for(int j = 0; j < 15; j++){

        cin >> n;

        if(n % 2 == 0) {
            par[p++] = n;

            if(p == 5){
                while(p--)
                    cout << "par[" << 4-p << "] = " << par[4-p] << endl;
                p = 0;
            }

        }else {
            impar[i++] = n;

            if(i == 5){
                while(i--)
                    cout << "impar[" << 4-i << "] = " << impar[4-i] << endl;
                i = 0;
            }
        }

    }

    for(int j = 0; j < i; j++)
        cout << "impar[" << j << "] = " << impar[j] << endl;

    for(int j = 0; j < p; j++)
        cout << "par[" << j << "] = " << par[j] << endl;

    return 0;
}
