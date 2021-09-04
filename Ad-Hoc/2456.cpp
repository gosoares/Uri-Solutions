#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
 
    vector<int> n(5);
    for(int i = 0; i < 5; i++) {
        cin >> n[i];
    }

    bool asc = true, desc = true;
    for(int i = 1; i < 5; i++) {
        if(n[i-1] > n[i]) asc = false;
        else if (n[i-1] < n[i]) desc = false;
    }

    if(asc) cout << 'C' << endl;
    else if (desc) cout << 'D' << endl;
    else cout << 'N' << endl;
 
    return 0;
}