#include <iostream>

using namespace std;

int main() {

    unsigned long long int n, hashh, l;
    string s;

    cin >> n;

    while(n--){
        cin >> l;

        hashh = 0;
        for(int i = 0; i < l; i++){
            cin >> s;
            for(int j = 0; j < s.size(); j++){
                hashh += s[j] - 'A' + i + j;
            }
        }

        cout << hashh << endl;

    }

    return 0;
}
