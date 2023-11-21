#include <stdio.h>

int main(){

    double salario, reajuste;
    int ajuste;

    scanf("%lf", &salario);

    if(salario <= 400)
        ajuste = 15;
    else if(salario <= 800)
        ajuste = 12;
    else if(salario <= 1200)
        ajuste = 10;
    else if(salario <= 2000)
        ajuste = 7;
    else
        ajuste = 4;

    reajuste = salario * (ajuste / 100.0);

    salario += reajuste;

    printf("Novo salario: %.2lf\n", salario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %%\n", ajuste);

    return 0;
}
