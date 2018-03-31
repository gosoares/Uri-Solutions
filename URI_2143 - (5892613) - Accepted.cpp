#include <iostream>

using namespace std;

int main() {

    int t, n;

    while(true){
        cin >> t;
        if(t == 0)
            break;

        while(t--){
            cin >> n;

            cout << n * 2 - 2 + n%2 << endl;
        }

    }

    return 0;
}
