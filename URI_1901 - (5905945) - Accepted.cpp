#include <iostream>
#include <set>

using namespace std;

int main() {

    set<int> visto;

    int n, x, y;

    cin >> n;

    int floresta[n][n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> floresta[i][j];

    for(int i = 0; i < 2*n; i++){
        cin >> x >> y;
        visto.insert(floresta[x-1][y-1]);
    }

    cout << visto.size() << endl;

    return 0;
}
