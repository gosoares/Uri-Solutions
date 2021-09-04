#include <iostream>
 
using namespace std;
 
int main() {
 
    char s[512];
    cin.getline(s, 512);

    for(int i = 0; s[i] != 0; i++) {
        if(s[i] == ',') cout << '\n';
        else cout << s[i];
    }
    
    cout << endl;
 
    return 0;
}