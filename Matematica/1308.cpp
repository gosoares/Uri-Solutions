#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

	unsigned long long n;
	int q;

    cin >> q;

	while(q--){
        cin >> n;
        cout << (int) ((sqrt(8*n + 1) - 1) / 2) << endl;
	}


	return 0;
}
