#include <iostream>

using namespace std;

int main() {

    int n, m, l, cm, cl, a;

    while(cin >> n){

        cin >> m >> l;

        int marcos[m][n], leo[l][n];

        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                cin >> marcos[i][j];

        for(int i = 0; i < l; i++)
            for(int j = 0; j < n; j++)
                cin >> leo[i][j];

        cin >> cm >> cl;
        cin >> a;

        if(marcos[cm-1][a-1] > leo[cl-1][a-1])
            cout << "Marcos" << endl;
        else if(leo[cl-1][a-1] > marcos[cm-1][a-1])
            cout << "Leonardo" << endl;
        else
            cout << "Empate" << endl;



    }

    return 0;
}
