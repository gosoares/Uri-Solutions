#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n, i, j;

    while(cin >> n){

        int m[n][n];

        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++)
                m[i][j] = 0;
            m[i][i] = 2;
            m[i][n-i-1] = 3;
        }

        int k = n/3;

        for(i = k; i < n - k; i++){
            for(j = k; j < n - k; j++){
                m[i][j] = 1;
            }
        }

        if(n % 2 == 1)
            m[(n-1)/2][(n-1)/2] = 4;

        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++)
                cout << m[i][j];
           cout << endl;
        }
        cout << endl;

    }

    return 0;
}
