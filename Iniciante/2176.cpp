#include <iostream>

using namespace std;

int main() {

    string s;

    cin >> s;

    int bits = 0;

    for(int i = 0; i < s.size(); i++)
        bits += s[i] - '0';

    cout << s << bits % 2 << endl;

    return 0;
}
