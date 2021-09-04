#include <iostream>

using namespace std;

int main() {

    float a[100];

    for(int i = 0; i < 100; i++)
        cin >> a[i];

    cout.precision(1);
    cout << fixed;

    for(int i = 0; i < 100; i++)
        if(a[i] <= 10)
            cout << "A[" << i << "] = " << a[i] << endl;

    return 0;
}
