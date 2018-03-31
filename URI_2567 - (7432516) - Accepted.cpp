#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n, letalidade;

    while(cin >> n){

        int virus[n];

        for(int i = 0; i < n; i++)
            cin >> virus[i];

        sort(virus, virus + n);

        letalidade = 0;

        for(int i = 0; i + i + 1 < n; i++){
            letalidade += virus[n - i - 1] - virus[i];
        }

        cout << letalidade << endl;

    }


    return 0;
}
