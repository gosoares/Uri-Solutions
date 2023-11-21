#include <stdio.h>

int main(){

    int n, maior, posicao = 1;

    scanf("%d", &maior);

    int i;
    for(i = 2; i <= 100; i++){

        scanf("%d", &n);

        if(n > maior){
            maior = n;
            posicao = i;
        }

    }

    printf("%d\n%d\n", maior, posicao);


    return 0;
}
