#include <stdio.h>

int main(){

    int qtdPositivos = 0, i;
    float n, total = 0;

    for(i = 0; i < 6; i++){
        scanf("%f", &n);
        if(n > 0){
            qtdPositivos++;
            total += n;
        }
    }

    printf("%d valores positivos\n", qtdPositivos);
    printf("%.1f\n", total / qtdPositivos);

    return 0;
}
