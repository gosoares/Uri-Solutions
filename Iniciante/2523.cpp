#include <iostream>
#include <cmath>

using namespace std;

int main() {

    string s;
    int n, l;

    while(cin >> s){
        cin >> n;

        while(n--){
            cin >> l;
            cout << s[l-1];
        }

        cout << endl;

    }

    return 0;
}
