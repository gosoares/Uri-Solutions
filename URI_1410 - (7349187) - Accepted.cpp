#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int a, d;

    while(cin >> a >> d){
        if(a == 0 && d == 0)
            break;

        int b[a], c[d];

        for(int i = 0; i < a; i++)
            cin >> b[i];

        for(int i = 0; i < d; i++)
            cin >> c[i];

        sort(b, b+a);
        sort(c, c+d);

        if(b[0] < c[1])
            cout << "Y" << endl;
        else
            cout << "N" << endl;


    }

    return 0;
}
