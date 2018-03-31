#include <iostream>

using namespace std;

int main() {

    unsigned long long int phillbonati[18];

    phillbonati[1] = 0;
    phillbonati[2] = 1;

    for(int i = 3; i <= 17; i++){
        if(i % 2 == 0)
            phillbonati[i] = phillbonati[i-1] * phillbonati[i-2];
        else
            phillbonati[i] = phillbonati[i-1] + phillbonati[i-2];
    }

    int n;

    while(cin >> n)
        cout << phillbonati[n] << endl;

    return 0;
}
