#include <iostream>
 
using namespace std;
 
int main() {
 
    string s, b;
    int nb = 0;

    while (getline(cin, s)) {
        if (s.size() == 1 && s[0] == '0') break;

        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                cout << count << '-';
                if (count >= nb) {
                    b = s.substr(i - count, count);
                    nb = count;
                }

                count = 0;
            } else {
                count++;
            }
        }
        if (count >= nb) {
            b = s.substr(s.size() - count, count);
            nb = count;
        }
        cout << count << endl;
    }

    cout << endl << "The biggest word: " << b << endl;
 
    return 0;
}