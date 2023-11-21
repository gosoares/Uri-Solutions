#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
 
    int n, k;
    cin >> n >> k;

    vector<int> p(n);

    for(int i = 0; i < n; i++) {
        cin >> p[i];
    }

    sort(p.begin(), p.end(), greater<int>());

    while(k < p.size() && p[k] == p[k-1]) k++;

    cout << k << endl;
 
    return 0;
}