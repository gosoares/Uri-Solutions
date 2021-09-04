#include <iostream>
 
using namespace std;
 
int main() {
 
    char s[512];

    while(cin.getline(s, 512)) {
        bool hasUpper = false, hasLower = false, hasNumber = false, hasSpecial = false;

        int c;
        for (c = 0; s[c] != 0; c++) {
            bool isUpper = s[c] >= 'A' && s[c] <= 'Z';
            bool isLower = s[c] >= 'a' && s[c] <= 'z';
            bool isNumber = s[c] >= '0' && s[c] <= '9';
            bool isSpecial = !isUpper && !isLower && !isNumber;

            hasUpper |= isUpper;
            hasLower |= isLower;
            hasNumber |= isNumber;
            hasSpecial |= isSpecial;
        }

        if(hasUpper && hasLower && hasNumber && !hasSpecial && c >= 6 && c <= 32) {
            cout << "Senha valida." << endl;
        } else {
            cout << "Senha invalida." << endl;
        }
    }
    return 0;
}