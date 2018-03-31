#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int c[n+1][n+1];

    for(int i = 0; i <= n; i++)
        for(int j = 0; j <= n; j++)
            cin >> c[i][j];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(c[i][j] + c[i][j+1] + c[i+1][j] + c[i+1][j+1] >= 2)
                cout << 'S';
            else
                cout << 'U';
        }
        cout << endl;
    }

    return 0;
}
