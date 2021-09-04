#include <stdio.h>

int main(){

    int x, y, soma;

    while(1){

        scanf("%d %d", &x, &y);
        if(x <= 0 || y <= 0)
            break;

        if(x > y){
            int aux = x;
            x = y;
            y = aux;
        }

        soma = 0;
        for(; x <= y; x++){
            printf("%d ", x);
            soma += x;
        }
        printf("Sum=%d\n", soma);



    }

    return 0;
}
