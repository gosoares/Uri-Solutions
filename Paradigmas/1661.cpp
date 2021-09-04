#include <iostream>

using namespace std;

int abs(int n){
    return (n < 0 ? -n : n);
}

int main() {

    int n;
    long long trabalho;


    while(cin >> n && n > 0){
        int a[n];

        for(int i = 0; i < n; i++)
            cin >> a[i];

        trabalho = 0;

        for(int i = 1; i < n; i++){
            trabalho += abs(a[i-1]);
            a[i] += a[i-1];
        }

        cout << trabalho << endl;
    }

    return 0;
}
