#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, p, t = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> p;

        if (p != 1) t++;
    }

    cout << t << endl;
 
    return 0;
}