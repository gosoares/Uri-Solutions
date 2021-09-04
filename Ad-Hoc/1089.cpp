#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int n, picos, i;

    while(true){

        cin >> n;
        if(n == 0)
            break;

        int h[n];

        for(i = 0; i < n; i++)
            cin >> h[i];

        picos = 0;

        if((h[0] > h[1] && h[0] > h[n-1]) || (h[0] < h[1] && h[0] < h[n-1]))
            picos++;

        for(i = 1; i < n; i++)
            if((h[i] > h[i-1] && h[i] > h[(i+1)%n]) || (h[i] < h[i-1] && h[i] < h[(i+1)%n]))
                picos++;

        cout << picos << endl;

    }

    return 0;
}
