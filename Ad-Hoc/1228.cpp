#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
 
    int n;

    while(cin >> n) {
        vector<int> larg(n), ch(n);

        for(int i = 0; i < n; i++)
            cin >> larg[i];

        for(int i = 0; i < n; i++)
            cin >> ch[i];

        int ultrapassagens = 0;

        for(int i = 0; i < n; i++) {
            int k = i;
            while(larg[k] != ch[i]) k++;
            ultrapassagens += k - i;

            int aux = larg[k];

            while(k > i) {
                larg[k] = larg[k - 1];
                k--;
            }

            larg[i] = aux;
        }

        cout << ultrapassagens << endl;
    }
 
    return 0;
}