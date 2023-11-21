#include <iostream>
 
using namespace std;
 
int main() {
 
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.compare(s2) > 0) {
        swap(s1, s2);
    }

    cout << s1 << endl << s2 << endl;
 
    return 0;
}