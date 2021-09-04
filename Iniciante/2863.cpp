#include <iostream>
#include <limits>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    cout << fixed << setprecision(2);

    int t;
    
    while(cin >> t) {
        double best = numeric_limits<double>::max(), x;
        for(int i = 0; i < t; i++) {
            cin >> x;
            if(x < best) best = x;
        }
        cout << best << endl;
    }
 
    return 0;
}