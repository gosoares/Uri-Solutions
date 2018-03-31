#include <iostream>

using namespace std;

int main() {

    string risada;

    char vogais[51];
    int qtdVogais = 0;

    cin >> risada;

    for(int i = 0; i < risada.size(); i++){
        if(risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u')
            vogais[qtdVogais++] = risada[i];
    }

    bool palindrome = true;

    for(int i = 0; i < qtdVogais/2; i++){
        if(vogais[i] != vogais[qtdVogais - i - 1]){
            palindrome = false;
            break;
        }
    }

    if(palindrome)
        cout << 'S' << endl;
    else
        cout << 'N' << endl;

    return 0;
}
