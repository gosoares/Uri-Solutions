#include <iostream>

using namespace std;

int main() {

    int s, t, f;

    cin >> s >> t >> f;

    int hora = s + t + f;

    if(hora >= 0)
        cout << hora % 24 << endl;
    else
        cout << 24 + hora << endl;

    return 0;
}
