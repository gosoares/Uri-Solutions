#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
struct Meat {
    string name;
    int expiration;
};

bool comparator (const Meat& m1, const Meat& m2) {
    return m1.expiration < m2.expiration;
}

int main() {

    int n;
    while (cin >> n) {
        vector<Meat> meats(n);

        for(int i = 0; i < n; i++) {
            cin >> meats[i].name >> meats[i].expiration;
        }

        sort(meats.begin(), meats.end(), comparator);

        cout << meats[0].name;
        for (int i = 1; i < n; i++)
            cout << " " << meats[i].name;
        cout << endl;
    }

    return 0;
}