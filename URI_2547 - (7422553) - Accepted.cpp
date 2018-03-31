#include <iostream>

using namespace std;

int main() {

    int visitantes, alturaMinima, alturaMaxima, altura, permitidos;

    while(cin >> visitantes >> alturaMinima >> alturaMaxima){

        permitidos = 0;
        while(visitantes--){
            cin >> altura;
            if(altura >= alturaMinima && altura <= alturaMaxima)
                permitidos++;
        }

        cout << permitidos << endl;;

    }

    return 0;
}
