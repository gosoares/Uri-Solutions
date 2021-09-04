#include <stdio.h>

int main(){

    float n;
    int p = 0;

    int i;
    for(i = 0; i < 6; i++){
        scanf("%f", &n);
        if(n > 0)
            p++;
    }

    printf("%d valores positivos\n", p);

    return 0;
}
