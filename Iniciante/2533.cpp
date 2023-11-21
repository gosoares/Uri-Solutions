#include <iostream>

using namespace std;

int main() {

    cout << fixed;
    cout.precision(4);

    int m, num, den, n, c;

    while(cin >> m){

        num = 0, den = 0;

        while(m--){
            cin >> n >> c;
            num += n*c;
            den += c;
        }
        den *= 100;


        cout << (double) num / den << endl;

    }

    return 0;
}
