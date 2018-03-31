#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

	int r, n, res;


	for(int caso = 1; cin >> r >> n && n > 0; caso ++){
        res = r / n;

        if(r % n == 0)
            res--;

        cout << "Case " << caso << ": ";
        if(res <= 26)
            cout << res << endl;
        else
            cout << "impossible" << endl;

	}

	return 0;
}
