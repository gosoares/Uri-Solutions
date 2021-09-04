#include <iostream>
#include <cmath>

using namespace std;

int main() {

    unsigned long long int n, m;

    int c;

    cin >> c;

    while(c--){
        cin >> n >> m;

        cout << ceil((double) n / m) << endl;
    }

    return 0;
}
