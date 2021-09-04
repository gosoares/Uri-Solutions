#include <stdio.h>

int main(){

    int qPar = 0, qImpar = 0, qPositivo = 0, qNegativo = 0, n, i;

    for(i = 0; i < 5; i++){
        scanf("%d", &n);

        if(n > 0)
            qPositivo++;
        else if(n != 0)
            qNegativo++;

        if(n % 2 == 0)
            qPar++;
        else
            qImpar++;

    }

    printf("%d valor(es) par(es)\n", qPar);
    printf("%d valor(es) impar(es)\n", qImpar);
    printf("%d valor(es) positivo(s)\n", qPositivo);
    printf("%d valor(es) negativo(s)\n", qNegativo);

    return 0;
}
