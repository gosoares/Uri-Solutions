#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int m, n, x1, y1, x2, y2, a;

    while(cin >> m >> n){

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> a;

                if(a == 1){
                    x1 = i;
                    y1 = j;
                }else if(a == 2){
                    x2 = i;
                    y2 = j;
                }

            }

        }

        cout << abs(x2 - x1) + abs(y2 - y1) << endl;
    }

    return 0;
}
