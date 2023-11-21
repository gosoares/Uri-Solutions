#include <iostream>

using namespace std;

int main() {

    int n, c;
    cin >> n;

    string s;

    while(n--){
        cin >> s;

        c = 0;
        if(s.size() == 5)
            cout << 3 << endl;
        else{
            if(s[0] == 'o')
                c++;
            if(s[1] == 'n')
                c++;
            if(s[2] == 'e')
                c++;

            if(c >= 2)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }

    }

    return 0;
}
