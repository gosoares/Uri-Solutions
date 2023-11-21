#include <stdio.h>

int main(){

    int x, y, soma = 0;

    scanf("%d\n%d", &x, &y);

    if(x > y){
        int aux = x;
        x = y;
        y = aux;
    }

    if(x % 2 == 0)
        x--;

    for(x += 2;x < y; x+=2)
        soma += x;

    printf("%d\n", soma);

    return 0;
}
