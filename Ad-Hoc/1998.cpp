#include <iostream>

using namespace std;

int main() {

    int n, i, j;
    int p[501];

    while(cin >> n){
        if(n == -1)
            break;

        for(i = 1; i <= n; i++){
            cin >> p[i];
        }

        for(i = 1; i <= n; i++){
            if(p[i] == i){
                p[i] = 0;

                for(j = i-1; j > 0; j--){
                    p[j]++;
                }

                i = 0;

            }
        }

        for(i = 1; i <= n && p[i] == 0; i++);

        cout << (i <= n ? 'N' : 'S') << endl;

    }

    return 0;
}
