#include <stdio.h>

int main() {

    int dias;

    scanf("%d", &dias);

    printf("%d ano(s)\n", dias/365);
    printf("%d mes(es)\n", (dias%365)/30);
    printf("%d dia(s)\n", (dias%365)%30);

    return 0;
}
