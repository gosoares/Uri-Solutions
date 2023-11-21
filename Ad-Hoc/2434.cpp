#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, s, x, smaller;

    cin >> n >> s;

    smaller = s;
    while (n--) {
        cin >> x;
        s += x;

        if (s < smaller)
            smaller = s;
    } 

    cout << smaller << endl;
 
    return 0;
}