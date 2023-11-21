#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    string dolares;
    unsigned long long int centavos, i, x;

    while(cin >> dolares >> centavos){
        cin.ignore();

        cout << '$';

        x = dolares.size() % 3;
        if(x == 0)
            x = 3;

        for(i = 0; i < x; i++)
            cout << dolares[i];

        x = dolares.size();

        while(i < x){
            cout << ',' << dolares[i] << dolares[i+1] << dolares[i+2];
            i += 3;
        }

        cout << '.';
        cout << setw(2) << setfill('0') << centavos << endl;

    }

    return 0;
}
