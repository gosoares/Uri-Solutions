#include <iostream>

using namespace std;

int main() {

    int n, x, y, rafael, beto, carlos;
    cin >> n;

    while(n--){

        cin >> x >> y;

        rafael = 9*x*x + y*y;
        beto = 2*x*x + 25*y*y;
        carlos = y*y*y - 100*x;

        if(rafael > beto && rafael > carlos)
            cout << "Rafael";
        else if(beto > carlos)
            cout << "Beto";
        else
            cout << "Carlos";

        cout << " ganhou" << endl;

    }

    return 0;
}
