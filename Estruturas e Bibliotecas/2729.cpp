#include <iostream>
#include <set>
#include <sstream>
 
using namespace std;
 
int main() {
 
    string s;
    int n;
    cin >> n;
    cin.ignore();

    while (n--) {
        getline(cin, s);
        
        istringstream f(s);

        set<string> list;
        while (f >> s) {
            list.insert(s);
        }

        bool printSpace = false;
        for (const string& x : list) {
            if (printSpace) cout << " ";
            else printSpace = true;

            cout << x;
        }

        cout << endl;
    }
 
    return 0;
}