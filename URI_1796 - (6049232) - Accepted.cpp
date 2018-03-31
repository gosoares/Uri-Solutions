#include <iostream>

using namespace std;

int main() {

    int q, v, t = 0;

    cin >> q;

    for(int i = 0; i < q; i++){
        cin >> v;
        t += v;
    }

    if((double) t / q < 0.5 )
        cout << 'Y' << endl;
    else
        cout << 'N' << endl;

    return 0;
}
