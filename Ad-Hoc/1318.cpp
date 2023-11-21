#include <iostream>

using namespace std;

int main() {

    int n, m, i, falsos, t;
    int b[100001];

    while(cin >> n >> m){
        if(n == 0 && m == 0)
            break;

        for(i = 1; i <= n; i++){
            b[i] = 0;
        }

        falsos = 0;
        for(i = 0; i < m; i++){
            cin >> t;

            if(b[t] == 0){
                b[t]++;
            }else if(b[t] == 1){
                falsos++;
                b[t]++;
            }

        }

        cout << falsos << endl;

    }

    return 0;
}
