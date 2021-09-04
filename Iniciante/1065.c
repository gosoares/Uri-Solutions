#include <stdio.h>

int main(){

    int qtdPares = 0, n, i;

    for(i = 0; i < 5; i++){
        scanf("%d", &n);
        if(n%2 == 0)
            qtdPares++;
    }

    printf("%d valores pares\n", qtdPares);

    return 0;
}
