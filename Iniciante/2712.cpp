#include <iostream>
 
using namespace std;
 
bool isLetter(char c) {
    return c >= 'A' && c <= 'Z';
}

bool isNumber(char c) {
    return c >= '0' && c <= '9';
}

bool isPlate(string s) {
    if (s.size() != 8)
        return false;

    if (s[3] != '-')
        return false;

    for (int i = 0; i <= 2; i++) 
        if (!isLetter(s[i]))
            return false;

    for (int i = 4; i <= 7; i++) 
        if (!isNumber(s[i]))
            return false;

    return true;
}

int main() {
 
    string s;
    int n;
    cin >> n;

    while (n--) {
        cin >> s;

        if (!isPlate(s)) {
            cout << "FAILURE" <<endl;
            continue;   
        }

        char d = s.back();

        if (d == '1' || d == '2')
            cout << "MONDAY" << endl;
        else if (d == '3' || d == '4')
            cout << "TUESDAY" << endl;
        else if (d == '5' || d == '6')
            cout << "WEDNESDAY" << endl;
        else if (d == '7' || d == '8')
            cout << "THURSDAY" << endl;
        else // if d == 9 || 0
            cout << "FRIDAY" << endl;

    }
 
    return 0;
}