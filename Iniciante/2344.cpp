#include <iostream>
 
using namespace std;
 
int main() {
 
    unsigned int n;
    cin >> n;

    if(n == 0) cout << 'E' << endl;
    if(n >= 1 && n <= 35) cout << 'D' << endl;
    if(n >= 36 && n <= 60) cout << 'C' << endl;
    if(n >= 61 && n <= 85) cout << 'B' << endl;
    if(n >= 86 && n <= 100) cout << 'A' << endl;
 
    return 0;
}