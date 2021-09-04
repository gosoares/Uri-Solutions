#include <iostream>
#include <string>

using namespace std;

int main() {

    int t, var;

    cin >> t;
    cin.ignore();

    while(t--){

        string s;
        cin >> s;

        var = 1;
        for(int i = 0; i < s.size(); i++){

            if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 's' || s[i] == 'S')
                var *= 3;
            else
                var *= 2;
        }

        cout << var << endl;

    }

    return 0;
}
