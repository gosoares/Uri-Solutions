#include <iostream>

using namespace std;

int main() {

    unsigned long long int r, s = 1;

    cin >> r;

    for(int i = 0; i < r; i++)
        s *= 3;

    cout << s << endl;

    return 0;
}
