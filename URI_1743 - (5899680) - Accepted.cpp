#include <iostream>

using namespace std;

int main() {

    int conector1[5],  conector2, i;

    bool valido = true;

    for(i = 0; i < 5; i++)
        cin >> conector1[i];

    for(i = 0; i < 5; i++){
        cin >> conector2;
        if(conector2 == conector1[i])
            valido = false;
    }

    valido ? cout << 'Y' << endl : cout << 'N' << endl;

}
