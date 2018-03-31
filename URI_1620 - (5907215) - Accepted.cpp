#include <iostream>

using namespace std;

int main() {

    double L, I, X;

    cout << fixed;
    cout.precision(6);

    while(true){
        cin >> L;
        if(L == 0.0)
            break;

        X = (L - 3.0) / L;

        cout << X << endl;

    }

    return 0;
}
