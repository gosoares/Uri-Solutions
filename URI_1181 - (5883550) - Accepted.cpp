#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int l;
    char t;
    double m[12][12], soma;

    cin >> l;
    cin >> t;

    for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                    cin >> m[i][j];
            }
    }

    soma = 0;
    for(int i = 0; i < 12; i++)
        soma += m[l][i];

    cout.precision(1);
    cout << fixed;

    if(t == 'S')
        cout << soma << endl;
    else
        cout << soma / 12 << endl;

    return 0;
}
