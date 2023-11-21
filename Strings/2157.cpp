#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {

    int c, b, e;
    string s;

    cin >> c;

    while(c--){
        cin >> b >> e;
        stringstream ss;
        for(; b <= e; b++)
            ss << b;

        s = ss.str();

        cout << s;
        reverse(s.begin(), s.end());
        cout << s << endl;
    }

    return 0;
}
