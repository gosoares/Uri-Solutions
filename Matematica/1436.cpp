#include <iostream>

using namespace std;

int main(){

    int t, n, lixo, idade, i;
    cin >> t;

    for(int j = 1; j <= t; j++){
        cin >> n;

        n /= 2;

        for(i = 0; i <= n; i++)
            cin >> idade;

        for(i = 0; i < n; i++)
            cin >> lixo;

        cout << "Case " << j << ": " << idade << endl;
    }

    return 0;
}
