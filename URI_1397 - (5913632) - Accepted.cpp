#include <iostream>

using namespace std;

int main() {

    int n, a, b, p1, p2;

    while(true){
        cin >> n;
        if(n == 0)
            break;

        p1 = 0, p2 = 0;
        while(n--){
            cin >> a >> b;

            if(a > b)
                p1++;
            else if(b > a)
                p2++;

        }

        cout << p1 << " " << p2 << endl;
    }

    return 0;
}
