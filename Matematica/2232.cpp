#include <iostream>

using namespace std;

int main() {

    int t, n, s, pow;

    cin >> t;

    while(t--){

        cin >> n;

        pow = 1;
        s = 1;

        for(int i = 1; i < n; i++){
            pow *= 2;
            s += pow;
        }

        cout << s << endl;

    }

    return 0;
}
