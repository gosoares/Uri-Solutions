#include <iostream>

using namespace std;

int main() {

    int t, pa, pb, n;

    double g1, g2;

    cin >> t;

    while(t--){

        cin >> pa >> pb >> g1 >> g2;

        g1 = 1 + (g1 / 100);
        g2 = 1 + (g2 / 100);

        n = 0;
        while(pa <= pb && n <= 100){
            pa *= g1;
            pb *= g2;
            n++;
        }

        if(n <= 100){
            cout << n << " anos." << endl;
        }else {
            cout << "Mais de 1 seculo." << endl;
        }
    }

    return 0;
}
