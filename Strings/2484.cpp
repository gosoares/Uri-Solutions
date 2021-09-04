#include <iostream>
 
using namespace std;
 
int main() {
 
    string s;

    while(cin >> s) {

        for(int i = 0; i < s.size(); i++) {

            for(int j = 0; j < i; j++) cout << " ";
            
            cout << s[0];
            for (int j = 1; j < s.size() - i; j++)
                cout << " " << s[j];

            cout << endl;
        }

        cout << endl;
    }
 
    return 0;
}