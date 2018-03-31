#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n, q, x;
    cin >> n;
    string sequencia, sub;

    while(n--){
        cin >> sequencia;

        cin >> q;

        while(q--){
            cin >> sub;

            x = 0;
            for(int i = 0; i < sequencia.size() && x < sub.size(); i++){
                if(sequencia[i] == sub[x])
                    x++;
            }

            cout << (x == sub.size() ? "Yes" : "No") << endl;
        }

    }

	return 0;
}
