#include <iostream>

using namespace std;

int main() {

    int train[51];

    int n, l, i, j, swaps, aux;

    cin >> n;

    while(n--){
        cin >> l;

        for(i = 0; i < l; i++)
            cin >> train[i];

        swaps = 0;
        for(i = 0; i < l; i++){
                for(j = i+1; j < l; j++){
                      if ( train[i] > train[j] ){
                           aux = train[i];
                           train[i] = train[j];
                           train[j] = aux;
                           swaps++;
                      }
                }
          }

        cout << "Optimal train swapping takes " << swaps << " swaps." << endl;
    }

    return 0;
}
