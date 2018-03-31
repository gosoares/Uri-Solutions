#include <iostream>

using namespace std;

int temDigitosDistintos(int numero[4], int digitos){

    /*char s[4];
    int t = 0;

    while(numero > 0){
        s[t++] = numero % 10;
        numero /= 10;
    }*/

    for(int i = 0; i < digitos; i++){
        for(int j = i + 1; j < digitos; j++){
            if(numero[i] == numero[j])
                return 0; // tem digitos iguais
        }
    }

    return 1;
}

void add(int numero[4], int &digitos, int posicao){
    if(numero[posicao] == 9){

        if(digitos == posicao + 1)
            digitos++;

        numero[posicao] = 0;
        add(numero, digitos, posicao+1);
    }else{
        numero[posicao]++;
    }
}

int main(){

    int numero[4] = {1, 0, 0, 0};
    int digitos = 1;

    int nums[5001]; // nums[i] armazena o numero de numeros com digitos distintos entre 1 e n
    int nums2[5001]; // nums2[i] = 1 se i tem numeros distintos
    nums[0] = 0;

    for(int i = 1; i <= 5000; i++){
        nums2[i] = temDigitosDistintos(numero, digitos);
        nums[i] = nums[i - 1] + nums2[i];
        add(numero, digitos, 0);
    }

    int n, m;

    while(cin >> n >> m){
        cout << nums[m] - nums[n] + nums2[n] << endl;
    }

    return 0;
}

