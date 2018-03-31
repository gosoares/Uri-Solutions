#include <iostream>

using namespace std;

int main() {

    int n, c, v, x;

    while(cin >> n && n > 0){

        x = 0;
        while(n--){
            cin >> c >> v;
            x += v/2;
        }

        cout << x/2 << endl;

    }

}
