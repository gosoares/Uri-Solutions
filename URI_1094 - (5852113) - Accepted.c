#include <stdio.h>

int main(){

    int n, quantia, total = 0, sapos = 0, ratos = 0, coelhos = 0;
    char tipo;

    scanf("%d", &n);

    while(n--){
        scanf("%d %c", &quantia, &tipo);
        total += quantia;

        if(tipo == 'S')
            sapos += quantia;
        else if(tipo == 'R')
            ratos += quantia;
        else
            coelhos += quantia;
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2f %%\n", ((float) coelhos / total) * 100);
    printf("Percentual de ratos: %.2f %%\n", ((float) ratos / total) * 100);
    printf("Percentual de sapos: %.2f %%\n", ((float) sapos / total) * 100);

    return 0;
}
