#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, cars = 0, dolls = 0;
    cin >> n;

    string s;
    char c;

    while (n--) {
        cin >> s >> c;

        if (c == 'F') dolls++;
        else cars++; // c == M
    }

    cout << cars << " carrinhos" << endl;
    cout << dolls << " bonecas" << endl;
 
    return 0;
}