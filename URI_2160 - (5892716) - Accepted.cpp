#include <iostream>
#include <cstring>

using namespace std;

int main() {

    string l;

    getline(cin, l);

    if(l.size() <= 80)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
