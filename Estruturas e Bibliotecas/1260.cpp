#include <iostream>
#include <cstring>
#include <map>
#include <stdio.h>

using namespace std;

int main() {

    int n, total;
    string entrada;

    cin >> n; cin.ignore();

    for(int j = 1; j <= n; j++){
        total = 0;
        map<string, int> arvores;
        map<string, int>::iterator i;

        if(j == 1)
            getline(cin, entrada);

        while(getline(cin, entrada)){
            if(entrada[0] == '\0' || entrada[0] == '\n')
                break;

            arvores[entrada]++;
            total++;
        }

        for(i = arvores.begin(); i != arvores.end(); i++){
            cout << i->first;
            printf(" %.4f\n", (i->second*100.0)/total);
        }

        if(j != n)
            cout << endl;
    }

    return 0;
}
