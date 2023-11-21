#include <iostream>
#include <vector>

using namespace std;

int main() {

    unsigned long long int s = ((unsigned long long int) 2 << 63) - 1;

    unsigned long long int nFib[s];

    nFib[0] = 1;
    nFib[1] = 1;

    for(unsigned long long int i = 2; i < s; i++) {
        nFib[i] = nFib[i-1] + nFib[i-2] + 1;
    }


    unsigned int n, b, r;

    for(unsigned int c = 1; true; c++) {
        cin >> n >> b;

        if(b == 0) break;

        r = nFib[n] % b;

        cout << "Case " << c << ": " << n << " " << b << " " << r << endl;
    }
    
    return 0;
}
