#include <stdio.h>

int main(){

    int i = 1, n;

    scanf("%d", &n);

    while( i%n != 2)
        i++;

    for(;i < 10000; i+= n)
        printf("%d\n", i);

    return 0;
}
