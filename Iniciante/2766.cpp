#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
 
    vector<string> s(11);
    for(int i = 1; i <= 10; i++) {
        cin >> s[i];
    }

    cout << s[3] << endl << s[7] << endl << s[9] << endl;
 
    return 0;
}