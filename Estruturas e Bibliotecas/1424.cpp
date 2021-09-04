#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

    map<int, vector<int> > numeros;

    int n, m, k, v;

    while(cin >> n >> m){

        numeros.clear();

        for(int i = 1; i <= n; i++){
            cin >> k;

            numeros[k].push_back(i);
        }

        while(m--){
            cin >> k >> v;

            if(numeros[v].size() < k)
                cout << 0 << endl;
            else
                cout << numeros[v][k-1] << endl;
        }

    }

	return 0;
}
