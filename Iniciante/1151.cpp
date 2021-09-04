#include <iostream>

using namespace std;

int main() {

    int n, a = 0, b = 0, c = 1;

    cin >> n;

    if(n > 0){
        cout << 0;
        if(n > 1)
            cout << " ";
        else
            cout << endl;
    }

    for(int i = 1; i < n - 1; i++){
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
    }

    if(n > 1)
        cout << c << endl;

    return 0;
}
