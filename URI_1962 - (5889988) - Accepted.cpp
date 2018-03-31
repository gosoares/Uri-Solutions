#include <iostream>

using namespace std;

int main(){

    int n, t;

    cin >> n;

    while(n--){
        cin >> t;

        t -= 2015;

        if(t >= 0){
            cout << t+1  << " A.C." << endl;
        } else {
            cout << -t << " D.C." << endl;
        }

    }

    return 0;
}
