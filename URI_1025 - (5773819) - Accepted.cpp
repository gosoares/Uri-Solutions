#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool ord(int n1, int n2){
    return n1 < n2;
}

int main(){

    int n, q;

    int caso = 0;
    while(true){
        caso++;
        cin >> n >> q;
        if(n == 0 && q == 0)
            break;

        vector<int> marmores;

        for(int i = 0, m; i < n; i++){
            cin >> m;
            marmores.push_back(m);
        }

        sort(marmores.begin(), marmores.end(), ord);

        cout << "CASE# " << caso << ":" << endl;
        for(int j = 0; j < q; j++){
            int procurando;
            cin >> procurando;

            int i = 0, f = n-1, m;
            bool encontrado = false;
            while(i <= f && !encontrado){
                m = (i + f) / 2;

                if(marmores[m] > procurando){
                    f = m - 1;
                }else if(marmores[m] < procurando) {
                    i = m + 1;
                } else{
                    encontrado = true;
                }
            }
            if(encontrado){
                    while( m > 0 && marmores[m-1] == procurando)
                        m--;
                cout << procurando << " found at " << m+1 << endl;
            }else{
                cout << procurando << " not found" << endl;
            }
        }

    }

    return 0;
}
