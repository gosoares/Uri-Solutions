#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool ord(int a, int b){
    return a > b;
}

int main() {

    int n, m, p, x;

    vector<int> notas, ordenada;

    cin >> n;

    while(n--){
        cin >> m;

        notas.clear();
        ordenada.clear();
        x = 0;

        while(m--){
            cin >> p;
            notas.push_back(p);
            ordenada.push_back(p);
        }

        sort(ordenada.begin(), ordenada.end(), ord);

        p = notas.size();

        for(m = 0; m < p; m++){
            if(notas[m] == ordenada[m])
                x++;
        }

        cout << x << endl;

    }

    return 0;
}
