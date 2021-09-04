#include <stdio.h>

int main() {

    double n;

    scanf("%lf", &n);

    int valor = n*100;

    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", valor/10000);
    valor %= 10000;

    printf("%d nota(s) de R$ 50.00\n", valor/5000);
    valor %= 5000;

    printf("%d nota(s) de R$ 20.00\n", valor/2000);
    valor %= 2000;

    printf("%d nota(s) de R$ 10.00\n", valor/1000);
    valor %= 1000;

    printf("%d nota(s) de R$ 5.00\n", valor/500);
    valor %= 500;

    printf("%d nota(s) de R$ 2.00\n", valor/200);
    valor %= 200;

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", valor/100);
    valor %= 100;

    printf("%d moeda(s) de R$ 0.50\n", valor/50);
    valor %= 50;

    printf("%d moeda(s) de R$ 0.25\n", valor/25);
    valor %= 25;

    printf("%d moeda(s) de R$ 0.10\n", valor/10);
    valor %= 10;

    printf("%d moeda(s) de R$ 0.05\n", valor/5);
    valor %= 5;

    printf("%d moeda(s) de R$ 0.01\n", valor);

    return 0;
}
