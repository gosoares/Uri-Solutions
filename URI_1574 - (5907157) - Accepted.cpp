#include <iostream>

using namespace std;

int main() {

    int t, n, pos, p;
    string inst;

    cin >> t;

    while(t--){
        cin >> n;

        int insts[n];
        pos = 0;

        for(int i = 1; i <= n; i++){
            cin >> inst;

            if(inst == "RIGHT"){
                pos++;
                insts[i] = 1;
            }else if(inst == "LEFT"){
                pos--;
                insts[i] = -1;
            }else {
                cin >> inst;
                cin >> p;
                cin.ignore();

                pos += insts[p];
                insts[i] = insts[p];

            }
        }

        cout << pos << endl;

    }

    return 0;
}
