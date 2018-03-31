#include <iostream>

using namespace std;

int main() {

    int n, d;
    char c;

    while(true){
        cin >> n;
        if(n == 0)
            break;

        d = 0;
        while(n--){
            cin >> c;

            if(c == 'D')
                d++;
            else
                d--;

        }

        while(d < 0)
            d += 4;

        d %= 4;

        if(d == 0)
            cout << 'N' << endl;
        else if(d == 1)
            cout << 'L' << endl;
        else if (d == 2)
            cout << 'S' << endl;
        else
            cout << 'O' << endl;


    }

    return 0;
}
