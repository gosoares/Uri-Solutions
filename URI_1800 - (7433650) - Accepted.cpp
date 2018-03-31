#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

    int q, e, a;

    cin >> q >> e;

    set<int> visitados;

    while(e--){
        cin >> a;
        visitados.insert(a);
    }

    while(q--){
        cin >> a;
        cout << 1 - visitados.count(a) << endl;
        visitados.insert(a);
    }

	return 0;
}
