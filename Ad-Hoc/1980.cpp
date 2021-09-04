#include <iostream>

using namespace std;

int main() {

    unsigned long long int fatorial[16];
    fatorial[0] = 1;

    for(int i = 1; i <= 15; i++)
        fatorial[i] = i*fatorial[i-1];

    string s;

    while(cin >> s && s != "0")
        cout << fatorial[s.size()] << endl;

    return 0;
}
