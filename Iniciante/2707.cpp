#include <iostream>
 
using namespace std;
 
int main() {
 
    string code;

    int n;
    while (cin >> n) {
        cin.ignore();

        while (n--) {
            getline(cin, code);

            size_t points = code.find(' ');
            int groups;

            if (points == string::npos) {
                points = code.size();
                groups = 1;
            } else {
                groups = (code.size() + 1) / (points + 1);
            }

            char c = 'a' - 1 + points + ((groups - 1) * 3);

            cout << c << endl;
        }
    }
 
    return 0;
}