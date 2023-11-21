#include <iostream>
 
using namespace std;

// Reference: https://www.topcoder.com/thrive/articles/Algorithm%20Games
int main() {
    
    string n;
    cin >> n;

    int r = 0;
    for (const char& c: n) {
        r = (r * 10 + (c - '0')) % 3;
    }

    cout << r << endl;
    
    return 0;
}