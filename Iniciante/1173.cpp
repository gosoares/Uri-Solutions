#include <iostream>

using namespace std;

int main() {


    int n[10];

    cin >> n[0];

    for(int i = 1; i < 10; i++)
        n[i] = 2 * n[i-1];

    for(int i = 0; i < 10; i++)
        cout << "N[" << i << "] = " << n[i] << endl;

    return 0;
}
