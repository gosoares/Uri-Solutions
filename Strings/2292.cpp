#include <iostream>

using namespace std;

/* void mudaLampada(string& lampadas, int p){
    if(lampadas[p] == 'X')
        lampadas[p] = 'O';
    else{
        lampadas[p] = 'X';
        if(p + 1 < lampadas.size())
            mudaLampada(lampadas, p+1);
    }
}

int main() {

    string lampadas;
    int n, c;

    cin >> n;

    while(n--){
        cin >> lampadas >> c;

        while(c--)
            mudaLampada(lampadas, 0);

        cout << lampadas << endl;
    }


    return 0;
}*/
int main() {

    string lampadas;
    unsigned long long int n, c;

    cin >> n;

    while(n--){
        cin >> lampadas >> c;

        for(int i = 0; i < lampadas.size() && c > 0; i++){
            if(c % 2 == 1){
                if(lampadas[i] == 'X'){
                    lampadas[i] = 'O';
                }else{
                    lampadas[i] = 'X';
                    c += 2;
                }
            }
            c /= 2;
        }

        cout << lampadas << endl;
    }


    return 0;
}
