#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n, q, p;

    while(cin >> n >> q){

        vector<int> notas(n);

        for(int i = 0; i < n; i++)
            cin >> notas[i];

        sort(notas.rbegin(), notas.rend());

        while(q--){
            cin >> p;
            cout << notas[p-1] << endl;
        }

    }

    return 0;
}
