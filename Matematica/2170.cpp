#include <iostream>

using namespace std;

int main() {

    double x, y;
    int i = 0;

    cout << fixed;
    cout.precision(2);

    while(cin >> x >> y){
        cout << "Projeto " << ++i << ":" << endl;
        cout << "Percentual dos juros da aplicacao: " << ( (double) y/x - 1) * 100 << " %" << endl << endl;
    }

    return 0;
}
