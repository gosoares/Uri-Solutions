#include <iostream>

using namespace std;

bool possivel[10001];

int main(){

    for(int i = 0; i*i <= 10000; i++){
        for(int j = 0; i*i + j*j <= 10000; j++){
            possivel[i*i + j*j] = true;
        }
    }

    int n;

    while(cin >> n){
        if(n >= 0 && possivel[n])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
