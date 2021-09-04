#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int t, n, m;

    cin >> t;

    while(t--){
        cin >> n >> m;

        cout << (int) (ceil((n - 2) / 3.0) * ceil((m-2) / 3.0)) << endl;

    }

    return 0;
}
