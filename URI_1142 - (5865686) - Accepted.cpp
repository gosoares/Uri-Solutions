#include <iostream>

using namespace std;

int main() {

    int n, x = 1;

    cin >> n;

    for(int i = 0; i < n; i++){
        cout << x << " " << x+1 << " " << x+2 << " PUM" << endl;
        x += 4;
    }

    return 0;
}
