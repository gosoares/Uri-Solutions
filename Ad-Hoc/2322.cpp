#include <iostream>
#include <vector>

using namespace std;
 
int main() {
 
    int n, x;
    cin >> n;
 
    vector<bool> missing(n, true);

    while (--n) {
        cin >> x;
        missing[x - 1] = false;
    }

    for (int i = 0; i < missing.size(); i++) {
        if (missing[i]) {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}