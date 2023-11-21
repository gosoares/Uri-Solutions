#include <iostream>
#include <unordered_set>
 
using namespace std;
 
int main() {
 
    int x;
    unordered_set<int> ns;

    for(int i = 0; i < 6; i++) {
        cin >> x;
        ns.insert(x);
    }

    int t = 0;
    for(int i = 0; i < 6; i++) {
        cin >> x;
        if (ns.find(x) != ns.end()) {
            t++;
        }
    }

    if (t == 3) {
        cout << "terno" << endl;
    } else if (t == 4) {
        cout << "quadra" << endl;
    } else if (t == 5) {
        cout << "quina" << endl;
    } else if (t == 6) {
        cout << "sena" << endl;
    } else {
        cout << "azar" << endl;
    }
 
    return 0;
}