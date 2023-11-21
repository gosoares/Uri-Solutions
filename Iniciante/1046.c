#include <stdio.h>

int main(){

    int i, f, d;

    scanf("%d %d", &i, &f);

    if(i < f)
        d = f - i;
    else
        d = 24 - i + f;

    printf("O JOGO DUROU %d HORA(S)\n", d);

    return 0;
}
