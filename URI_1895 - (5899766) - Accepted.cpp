#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int n, t, l, jogadores[2] = {0,0}, vez = 0, s;

    cin >> n >> t >> l;

    for(int i = 1; i < n; i++){
        cin >> s;

        if(abs(t-s) <= l){
            jogadores[vez] += abs(t-s);
            t = s;
        }

        vez = 1 - vez;
    }

    cout << jogadores[0] << " " << jogadores[1] << endl;

}
