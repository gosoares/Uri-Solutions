#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int l, v, m;

    while(cin >> l){

        m = 0;
        while(l--){
            cin >> v;
            if(v > m)
                m = v;
        }

        if(m < 10)
            cout << 1 << endl;
        else if(m < 20)
            cout << 2 << endl;
        else
            cout << 3 << endl;


    }

    return 0;
}
