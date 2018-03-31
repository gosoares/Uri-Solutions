#include <iostream>

using namespace std;

int main() {

    int n, r, won[2];

    while(true){
        cin >> n;
        if(n == 0)
            break;

        won[0] = 0;
        won[1] = 0;

        while(n--){
            cin >> r;
            won[r]++;
        }

        cout << "Mary won " << won[0] << " times and John won " << won[1] << " times" << endl;

    }

    return 0;
}
