#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int n;

    while(true){
        cin >> n;
        if(n == 0)
            break;

        int m[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++)
                m[i][j] = 0;
        }

        int t = 0;

        while(t <= n/2){
            for(int i = t; i < n - t; i++){
                for(int j = t; j < n - t; j++)
                    m[i][j]++;
            }

            t++;
        }


        for(int i = 0; i < n; i++){
            for(int j = 0; j < n-1; j++)
                printf("%3d ", m[i][j]);
            printf("%3d\n", m[i][n-1]);
        }
        cout << endl;

    }

    return 0;
}
