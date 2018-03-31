#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n, a, b, tempo;

    while(cin >> n && n > 0){

        tempo = 0, b = -1011;


        while(n--){
            a = b;
            cin >> b;
            tempo += min(10, b - a);
        }

        cout << tempo << endl;

    }

	return 0;
}
