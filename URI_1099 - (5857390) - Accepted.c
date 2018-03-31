#include <stdio.h>

int main(){

    int n, x, y, soma;

    scanf("%d", &n);

    while(n--){

        scanf("%d %d", &x, &y);

        if(x > y){
            int aux = x;
            x = y;
            y = aux;
        }

        if(x % 2 == 0)
            x--;

        soma = 0;
        for(x+=2; x < y; x+=2)
            soma += x;

        printf("%d\n", soma);

    }

    return 0;
}
