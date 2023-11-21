#include <iostream>
 
using namespace std;
 
int main() {
 
    string d, s;

    while(cin >> d >> s) {
        if (d.find(s) != string::npos) 
            cout << "Resistente" << endl;
        else
            cout << "Nao resistente" << endl;
    }
 
    return 0;
}