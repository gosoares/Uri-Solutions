#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int c, h, m, o;

    cin >> c;

    cout << fixed << setfill('0');

    while(c--){
        cin >> h >> m >> o;

        cout << setw(2) << h << ":" << setw(2) << m << " - A porta ";

        if(o == 1)
            cout << "abriu!" << endl;
        else
            cout << "fechou!" << endl;

    }

    return 0;
}
