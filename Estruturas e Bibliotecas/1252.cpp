#include <iostream>
#include <algorithm>

using namespace std;
int M;

bool sortNumeros(int a, int b){
    if(a % M == b % M){
        if(a%2 == 0 && b%2 == 0)
            return a < b;
        else if(a%2 == 0 || b%2 == 0)
            return b%2 == 0;
        else
            return a > b;
    }else{
        return a%M < b%M;
    }
}

int main(){

    int n;

    while((cin >> n >> M) && n != 0){

        long int numeros[n];

        for(int i = 0; i < n; i++)
            cin >> numeros[i];

        sort(numeros, numeros + n, sortNumeros);

        cout << n << " " << M << endl;

        for(int i = 0; i < n; i++)
            cout << numeros[i] << endl;

    }

    cout << "0 0" << endl;

    return 0;
}
