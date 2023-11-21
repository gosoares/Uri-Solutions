#include <iostream>
#include <map>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
    int c = 0;
    while(true){

        int n;
        cin >> n;
        if(n == 0)
            break;


        map<int, int> consumo;
        int pessoasTotal = 0;
        int consumoTotal = 0;

        for(int i = 0, x, y; i < n; i++){
            cin >> x >> y;
            pessoasTotal += x;
            consumoTotal += y;

            consumo[y/x] += x;
        }

        cout << "Cidade# " << ++c << ":" << endl;
        for( map<int, int>::iterator i = consumo.begin(); i != consumo.end(); i++){
            cout << i->second << "-" << i->first;
            if(i != --consumo.end())
                cout << " ";
            else
                cout << endl;
        }

        printf("Consumo medio: %.2f m3.\n", floor(100 * (float)consumoTotal/pessoasTotal) / 100);

    }
    return 0;
}
