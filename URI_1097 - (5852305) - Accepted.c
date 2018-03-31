#include <stdio.h>

int main(){

    int i, j, x;

    for(i = 1; i <= 9; i += 2){
        for(j = i + 6, x = 0; x < 3; x++, j--){
            printf("I=%d J=%d\n", i, j);
        }
    }

    return 0;
}
