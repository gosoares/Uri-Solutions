#include <iostream>

using namespace std;

int main() {

    int a, c, cortes;

    while(cin >> a >> c){
        if(a == 0 && c == 0)
            break;

        int x[c+1];

        x[0] = a;

        for(int i = 1; i <= c; i++){
            cin >> x[i];
        }

        cortes = 0;
        for(int i = 1; i <= c; i++){
            if(x[i-1] > x[i])
                cortes += x[i-1] - x[i];
        }

        cout << cortes << endl;

    }

    return 0;
}
