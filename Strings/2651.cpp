#include <iostream>
 
using namespace std;
 
int main() {
 
    string s;
    cin >> s;

    for(char& c : s)
        c = tolower(c);

    if(s.find("zelda") != string::npos) 
        cout << "Link Bolado" << endl;
    else
        cout << "Link Tranquilo" << endl;

    cout << s << endl;
 
    return 0;
}