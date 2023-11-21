#include <iostream>

using namespace std;

int main() {

    int t;
    unsigned long long int o;
    string a, b;

    cin >> t;

    while(t--){
        cin >> a >> b;

        o = 0;
        for(int i = 0; i < a.size(); i++){

            if(a[i] <= b[i])
                o += b[i] - a[i];
            else
                o += b[i] - a[i] + 26;

        }

        cout << o << endl;
    }

    return 0;
}
