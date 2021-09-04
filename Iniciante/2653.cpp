#include <iostream>
#include <unordered_set>
 
using namespace std;
 
int main() {
 
    unordered_set<string> joias;

    string s;
    while (cin >> s)
        joias.insert(s);

    cout << joias.size() << endl;
 
    return 0;
}