#include <iostream>

using namespace std;

int main() {

    int n, l, m2 = 0, m3 = 0, m4 = 0, m5 = 0;

    cin >> n;

    while(n--){
        cin >> l;

        if(l % 2 == 0)
            m2++;

        if(l % 3 == 0)
            m3++;

        if(l % 4 == 0)
            m4++;

        if(l % 5 == 0)
            m5++;
    }

    cout << m2 << " Multiplo(s) de 2" << endl;
    cout << m3 << " Multiplo(s) de 3" << endl;
    cout << m4 << " Multiplo(s) de 4" << endl;
    cout << m5 << " Multiplo(s) de 5" << endl;

    return 0;
}
