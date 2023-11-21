#include <stdio.h>

int main(){

    int cod1, qtd1, cod2, qtd2;
    float valor1, valor2;

    scanf("%d %d %f %d %d %f", &cod1, &qtd1, &valor1, &cod2, &qtd2, &valor2);

    printf("VALOR A PAGAR: R$ %.2f\n", qtd1*valor1 + qtd2*valor2);

    return 0;
}
