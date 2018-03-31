#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n, l, c, linhaAtual, linhas;
    string palavra;

    while(cin >> n >> l >> c){
       cin.ignore();

       linhaAtual = 0, linhas = 1;

       while(n--){
            cin >> palavra;

            if(linhaAtual + palavra.size() <= c){
                linhaAtual += palavra.size() + 1;
            }else{
                linhas++;
                linhaAtual = palavra.size() + 1;
            }

       }

       cout << ceil((double) linhas / l) << endl;


    }

    return 0;
}
