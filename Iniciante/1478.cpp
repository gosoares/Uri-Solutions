#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {

    int n;

    while(true){
        cin >> n;
        if(n == 0)
            break;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n-1; j++)
                printf("%3d ", abs(i - j) + 1);
            printf("%3d\n", abs(i - (n - 1)) + 1);
        }
        cout << endl;
    }

    return 0;
}
