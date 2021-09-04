#include <iostream>
 
using namespace std;
 
int main() {
 
    unsigned int d, p;
    cin >> d;

    if(d <= 800) p = 1;
    else if(d <= 1400) p = 2;
    else p = 3;

    cout << p << endl;
 
    return 0;
}