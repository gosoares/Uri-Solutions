#include <iostream>

using namespace std;

int main() {

    int t, n[1000], i;

    cin >> t;

    for(i = 0; i < 1000; i++)
        n[i] = i % t;

    for(i = 0; i < 1000; i++)
        cout << "N[" << i << "] = " << n[i] << endl;

    return 0;
}
