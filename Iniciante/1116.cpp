#include <iostream>

using namespace std;

int main() {

    int n, x, y;

    cin >> n;

    cout << fixed;
    cout.precision(1);

    while(n--){
        cin >> x >> y;

        if(y == 0)
            cout << "divisao impossivel" << endl;
        else
            cout << (float) x / y << endl;
    }

    return 0;
}
