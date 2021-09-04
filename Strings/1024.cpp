#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    int n;
    string s;

    cin >> n;
    cin.ignore();

    while(n--){

        getline(cin, s);

        for(int i = 0; i < s.size(); i++){
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
                s[i] += 3;
        }

        reverse(s.begin(), s.end());

        for(int i = s.size() / 2; i < s.size(); i++){
            s[i]--;
        }

        cout << s << endl;

    }

    return 0;
}
