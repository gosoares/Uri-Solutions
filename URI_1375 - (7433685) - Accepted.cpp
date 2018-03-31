#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n, c, p;
    bool valido;

    while(cin >> n && n > 0){

        valido = true;

        int placar[n];
        for(int i = 0; i < n; i++){
            placar[i] = 0;
        }

        for(int i = 0; i < n; i++){
            cin >> c >> p;

            if(i + p < 0 || i + p >= n || placar[i + p] > 0)
                valido = false;
            else
                placar[i + p] = c;

        }

        if(!valido){
            cout << -1 << endl;
            continue;
        }

        for(int i = 0; i < n-1; i++)
            cout << placar[i] << " ";
        cout << placar[n-1] << endl;
    }

	return 0;
}
