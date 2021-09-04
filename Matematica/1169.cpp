#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int n, x;
    unsigned long long int qtd;

    cin >> n;

    while(n--){

        cin >> x;

        qtd = pow(2, x) - 1;

        cout << qtd/12000 << " kg" << endl;


    }

    return 0;
}
