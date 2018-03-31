#include <iostream>

using namespace std;

int main() {

    int a, b, c;

    cin >> a >> b >> c;

    if(a + b > c && a + c > b && b + c > a){
        cout << "Valido-";

        if(a == b && b == c){
            cout << "Equilatero" << endl;
            cout << "Retangulo: N" << endl;
        }else if(a == b || a == c || b == c){
            cout << "Isoceles" << endl;
            cout << "Retangulo: N" << endl;
        }else{
            cout << "Escaleno" << endl;
            cout << "Retangulo: ";

            if(a*a == b*b+c*c || b*b == a*a+c*c || c*c == a*a+b*b)
                cout << 'S' << endl;
            else
                cout << 'N' << endl;

        }

    }else{
        cout << "Invalido" << endl;
    }

    return 0;
}
