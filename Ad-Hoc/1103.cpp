#include <iostream>

using namespace std;

int main() {

    int h1, m1, h2, m2;

    while(true){
        cin >> h1 >> m1 >> h2 >> m2;
        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
            break;

        m1 += h1*60;
        m2 += h2*60;

        if(m2 > m1)
            cout << m2 - m1 << endl;
        else
            cout << 1440 + m2 - m1 << endl;
    }

    return 0;
}
