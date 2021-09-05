#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
 
    int n, k;
    cin >> n >> k;

    vector<string> names(n);

    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    sort(names.begin(), names.end());

    cout << names[k-1] << endl;
 
    return 0;
}