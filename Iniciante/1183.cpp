#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    char t;
    double m[12][12], soma;

    cin >> t;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
                cin >> m[i][j];
        }
    }

    soma = 0;
    for(int i = 0; i < 12; i++){
        for(int j = i + 1; j < 12; j++){
                soma += m[i][j];
        }
    }


    cout.precision(1);
    cout << fixed;

    if(t == 'S')
        cout << soma << endl;
    else
        cout << soma / 66 << endl;

    return 0;
}
