#include <iostream>
 
using namespace std;
 
int main() {
 
    int x, greater = 0;

    while(true) {
        cin >> x;
        if(x == 0) break;
        if(x > greater) greater = x;
    }
    
    cout << greater << endl;
 
    return 0;
}