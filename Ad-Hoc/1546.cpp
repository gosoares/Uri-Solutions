#include <iostream>

using namespace std;

int main() {

    int n, k, a;

    cin >> n;

    while(n--){

        cin >> k;

        while(k--){

            cin >> a;

            if(a == 1)
                cout << "Rolien" << endl;
            else if(a == 2)
                cout << "Naej" << endl;
            else if (a == 3)
                cout << "Elehcim" << endl;
            else
                cout << "Odranoel" << endl;

        }

    }

    return 0;
}
