#include <iostream>
#include <vector>
#define INT_MAX 999999

using namespace std;

int main() {

    vector<int> va, vb;

    int a, b, i, j, ca, cb;

    while(cin >> a >> b){
        if(a == 0 && b == 0)
            break;

        va.resize(a+1);
        vb.resize(b+1);
        va[a] = INT_MAX;
        vb[b] = INT_MAX;

        for(i = 0; i < a; i++)
            cin >> va[i];

        for(j = 0; j < b; j++)
            cin >> vb[j];

        i = 0, j = 0, ca = 0, cb = 0;

        while(va[i] < INT_MAX || vb[j] < INT_MAX){
            if(va[i] == vb[j]){
                while(va[i] < INT_MAX && va[i] == va[++i]); // pula até o proximo elemento diferente do atual
                while(vb[j] < INT_MAX && vb[j] == vb[++j]);
            }else if(va[i] < vb[j]) { // alice tem uma carta que beatriz nao tem
                ca++; // conta quantas cartas alice tem que beatriz nao tem
                while(va[i] < INT_MAX && va[i] == va[++i]);
            }else{ // beatriz tem uma carta que alice nao tem
                cb++; // conta quantas cartas beatriz tem que alice nao tem
                while(vb[j] < INT_MAX && vb[j] == vb[++j]);
            }
        }

        cout << min(ca, cb) << endl;

    }

    return 0;
}
