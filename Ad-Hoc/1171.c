#include <stdio.h>

char x[2001];

int main(){

    int n, aux;
    scanf("%d", &n);

    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &aux);
        x[aux]++;
    }
    for(i = 0; i <= 2000; i++){
        if(x[i] > 0){
            printf("%d aparece %d vez(es)\n", i, x[i]);
        }
    }

    return 0;
}
