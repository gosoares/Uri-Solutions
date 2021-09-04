#include <iostream>

using namespace std;

int main() {

    int t, n, k;
    unsigned long long int fat;
    string sk;

    cin >> t;

    while(t--){
        cin >> n;

        getline(cin, sk);

        k = sk.size();

        fat = 1;

        for(int i = 0; n > i; i += k){
            fat *= n - i;
        }

        cout << fat << endl;

    }

    return 0;
}
