#include <stdio.h>

int main(){

    int n, i;
    int iniciou; // indica se ja iniciou a contagem
    int poste; // le a condição do poste
    int zerosInicio; // le quantos zeros leu, ate ler o primeiro um
    int zeros; // armazena quantos zeros foi lido apartir do ultimo 1;

    int total; // armazena total de postes necessarios

    while(1){
        scanf("%d", &n);
        if(n == 0)
            break;

        iniciou = 0; // ainda nao iniciou
        zerosInicio = 0; // ainda nao leu nenhum zero no inicio
        zeros = 0; // ainda nao leu nenhum zero
        total = 0;

        for(i = 0; i < n; i++){
            scanf("%d", &poste);

            if(iniciou){

                if(poste == 0)
                    zeros++;
                else {
                    total += zeros/2;
                    zeros = 0;
                }

            } else { // se nao iniciou
                if(poste == 0)
                    zerosInicio++;
                else
                    iniciou = 1;
            }
        }

        if(!iniciou && n%2 == 1)
            total++;

        total += (zeros + zerosInicio) / 2;

        printf("%d\n", total);
    }

    return 0;
}
