#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n, m, c, chave;

    cin >> n;
    while(n--){

        cin >> m >> c;

        vector<vector<int> > buckets(m);

        for(int i = 0; i < c; i++){

            cin >> chave;

            buckets[chave % m].push_back(chave);

        }

        for(int i = 0; i < m; i ++){
            cout << i << " -> ";
            for(int j = 0; j < buckets[i].size(); j++)
                cout << buckets[i][j] << " -> ";
            cout << "\\" << endl;
        }

        if(n > 0)
            cout << endl;
    }

    return 0;
}
