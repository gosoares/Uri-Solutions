#include <iostream>

using namespace std;

int main(){

    double n;

    cin >> n;

    if(n >= 0 && n <= 100){
        cout << "Intervalo ";
        if(n <= 25){
            cout << "[0,25]";
        }else if(n <= 50){
            cout << "(25,50]";
        }else if(n <= 75){
            cout << "(50,75]";
        }else{
            cout << "(75,100]";
        }
        cout << endl;
    }else{
        cout << "Fora de intervalo" << endl;
    }

    return 0;
}
