#include <stdio.h>

int main(){

    int numero, horas;
    float valor;

    scanf("%d %d %f", &numero, &horas, &valor);

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", numero, horas*valor);

    return 0;
}
