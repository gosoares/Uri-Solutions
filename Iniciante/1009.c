#include <stdio.h>

int main(){

    char nome[25];

    double salario, vendas;

    scanf("%s %lf %lf", &nome, &salario, &vendas);

    printf("TOTAL = R$ %.2lf\n", salario + vendas * 0.15);

    return 0;
}
