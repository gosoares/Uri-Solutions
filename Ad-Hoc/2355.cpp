#include <iostream>
#include <math.h>

using namespace std;

int main() {

    unsigned long long int n, igols;

    double gols;

    while(true){
        cin >> n;
        if(n == 0)
            break;

        gols = n / 90.0;

        igols = gols;

        cout << "Brasil " << igols << " x ";

        gols *= 7;
        igols = ceil(gols);

        cout << "Alemanha " << igols << endl;


    }

    return 0;
}
