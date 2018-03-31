#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int n;
    string s;

    cin >> n;
    cin.ignore();

    while(n--)
        getline(cin, s);

    cout << "Ciencia da Computacao" << endl;

    return 0;
}
