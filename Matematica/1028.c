#include <stdio.h>

int mdc(int a, int b){
    if(b==0)
        return a;
    return mdc(b, a%b);
}

int main(){

    int n, i, f1, f2;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d %d", &f1, &f2);

        printf("%d\n", mdc(f1, f2));

    }

    return 0;
}
