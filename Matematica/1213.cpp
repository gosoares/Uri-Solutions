#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n, qtd;
    unsigned long long ones;

    while(cin >> n){

        ones = 1;
        for(qtd = 1; ones % n != 0; qtd++){
            ones = (ones * 10 + 1) % n;
        }

        cout << qtd << endl;

    }

	return 0;
}
