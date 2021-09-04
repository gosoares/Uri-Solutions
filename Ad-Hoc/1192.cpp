#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int a, b, n;
    char c;

    cin >> n;

    while(n--){

        cin >> a >> c >> b;

        if(a == b)
            cout << a*b << endl;
        else if(c >= 'A' && c <= 'Z')
            cout << b-a << endl;
        else
            cout << a+b << endl;

    }

    return 0;
}
