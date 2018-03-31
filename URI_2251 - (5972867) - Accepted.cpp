#include <iostream>
#include <math.h>

using namespace std;

unsigned long long int pow2(unsigned long long int n){
    if(n == 0)
        return 1;
    return 2 * pow2(n-1);
}

int main() {

    unsigned long long int n;

    for(int i = 1; true; i++){
        cin >> n;
        if(n == 0)
            break;

        cout << "Teste " << i << endl;
        cout << pow2(n) - 1 << endl << endl;
    }

    return 0;
}
