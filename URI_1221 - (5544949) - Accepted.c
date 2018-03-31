#include <stdio.h>

int main(){

    int n;

    scanf("%d", &n);

    long int num;
    int i, j;
    for(i = 0; i < n; i++){
        scanf("%ld", &num);

        if(num == 0 || num == 1){
            printf("Not Prime\n");
            continue;
        }

        for(j = 2; j*j <= num; j++){
            if(num%j == 0)
                break;
        }

        if(j*j > num)
            printf("Prime\n");
        else
            printf("Not Prime\n");

    }

    return 0;
}
