#include <iostream>

using namespace std;

int main() {

    int l, r;

    while(true){
        cin >> l >> r;

        if(l+r > 0)
            cout << l + r << endl;
        else
            break;

    }

    return 0;
}
