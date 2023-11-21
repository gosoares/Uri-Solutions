#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, a, b;
    string p1, p2;


    for (int c = 1; cin >> n && n != 0; c++) {
        cin >> p1 >> p2;

        cout << "Teste " << c << endl;

        while (n--) {
            cin >> a >> b;
            if ((a + b) % 2 == 0)
                cout << p1 << endl;
            else 
                cout << p2 << endl;
        }

        cout << endl;
    }
 
    return 0;
}