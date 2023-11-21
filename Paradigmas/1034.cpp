#include <iostream>
#include <climits>

using namespace std;

int main(){

    int t, m, n;

    cin >> t;

    while(t--){

        cin >> n >> m;

        int blocos[n];

        for(int i = 0; i < n; i++)
            cin >> blocos[i];

        int minBlocos[m+1];
        minBlocos[0] = 0;
        minBlocos[1] = 1;

        for(int i = 2, restante; i <= m; i++){
            minBlocos[i] = INT_MAX;

            for(int j = 0; j < n; j++){
                restante = i - blocos[j];
                if(restante >= 0 && minBlocos[restante] + 1 < minBlocos[i]){
                    minBlocos[i] = minBlocos[restante] + 1;
                }
            }

        }

        cout << minBlocos[m] << endl;

    }

    return 0;
}
