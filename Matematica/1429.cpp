#include <iostream>

using namespace std;

int main() {

    unsigned long long int n, r, fat, i;

    while(true){
        cin >> n;
        if(n==0)
            break;

        fat = 1, r = 0;
        for(i = 1; n > 0; i++){
            fat *= i;

            r += (n%10) * fat;

            n /= 10;

        }

        cout << r << endl;

    }

    return 0;
}
