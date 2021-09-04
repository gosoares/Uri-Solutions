#include <stdio.h>

int main(){

    int n;

    scanf("%d", &n);

    int i;
    for(i = 2; i <= n; i+=2)
        printf("%d^2 = %d\n", i, i*i);

    return 0;
}
