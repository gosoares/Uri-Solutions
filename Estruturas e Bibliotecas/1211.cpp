#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int n;

    while(cin >> n){
        cin.ignore();

        vector<string> telefones(n);

        for(int i = 0; i < n; i++){
            getline(cin, telefones[i]);
        }

        sort(telefones.begin(), telefones.end());

        unsigned long long int economia = 0;

        for(int i = 1, j = 0; i < n; i++, j = 0){
            while(telefones[i-1][j] == telefones[i][j]){
                economia++;
                j++;
            }

        }

        cout << economia << endl;

    }

    return 0;
}
