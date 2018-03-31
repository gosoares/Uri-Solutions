#include <stdio.h>

int main(){

    int n, x, in = 0, out = 0;

    scanf("%d", &n);

    while(n--){
        scanf("%d", &x);

        if(x < 10 || x > 20)
            out++;
        else
            in++;
    }

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}
