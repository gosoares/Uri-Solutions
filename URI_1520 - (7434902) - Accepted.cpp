#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n, parafusos[101], x, y;

    while(cin >> n){

        for(auto &p : parafusos)
            p = 0;

        while(n--){
            cin >> x >> y;

            for(;x <= y; x++){
                parafusos[x]++;
            }
        }

        cin >> y;

        if(parafusos[y]){
            n = 0;
            for(x = 1; x < y; x++)
                n += parafusos[x];

            cout << y << " found from " << n << " to " << n + parafusos[y] -1 << endl;
        }else{
            cout << y << " not found" << endl;
        }


    }

	return 0;
}
