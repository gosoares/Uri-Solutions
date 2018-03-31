#include <iostream>
#include <cmath>

using namespace std;

int main() {

    cout << fixed;
    cout.precision(4);

    int n;

    double distancia, menor;

    while(cin >> n){
        if(n == 0)
            break;

        double x[n], y[n];

        for(int i = 0; i < n; i++){
            cin >> x[i] >> y[i];
        }

        menor = 999999;

        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                distancia = sqrt((x[j]-x[i])*(x[j]-x[i]) + (y[j]-y[i])*(y[j]-y[i]));
                if(distancia < menor)
                    menor = distancia;
            }
        }

        if(menor < 10000)
            cout << menor << endl;
        else
            cout << "INFINITY" << endl;

    }

    return 0;
}
