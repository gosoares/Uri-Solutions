#include <iostream>

using namespace std;

char intToChar32(int n){
    if(n < 10)
        return n + '0';
    else
        return n-10+'A';

}

int main() {

    unsigned long long int n;
    char b32[15];
    int i;

    while(true){
        cin >> n;
        if(n == 0){
            cout << 0 << endl;
            break;
        }

        i = 0;
        while(n > 0){
            b32[i++] = intToChar32(n%32);
            n /= 32;
        }

        for(i--; i >= 0; i--)
            cout << b32[i];

        cout << endl;

    }

    return 0;
}
