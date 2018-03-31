#include <iostream>
#include <cmath>

using namespace std;

bool temTodos(int *dado){
    bool tem[7];
    for(int i = 1; i <= 6; i++)
        tem[i] = false;

    for(int i = 0; i < 6; i++){
        if(dado[i] < 1 || dado[i] > 6)
            return false;
        tem[dado[i]] = true;
    }

    for(int i = 1; i <= 6; i++)
        if(!tem[i])
            return false;

    return true;
}

int oposto(int i){
    if(i == 0 || i == 5)
        return 5 - i;

    return ((i + 1) % 4) + 1;

}

bool valido(int *dado){

    if(!temTodos(dado))
        return false;

    for(int i = 0; i <= 2; i++)
        if(dado[i] + dado[oposto(i)] != 7)
            return false;

    return true;
}

int main() {

    int n;
    cin >> n;

    while(n--){
        int dado[6];

        for(int i = 0; i < 6; i++){
            cin >> dado[i];
        }


        cout << (valido(dado) ? "SIM" : "NAO") << endl;


    }

    return 0;
}
