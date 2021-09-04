#include <stdio.h>

int main(){

    int n;
    while(1){
        scanf("%d", &n);
        if(n == 0)
            break;

        int maior = 0, segMaior = 0, iMaior, iSegMaior, atual;

        int i;
        for(i = 0; i < n; i++){
            scanf("%d", &atual);

            if(atual > segMaior){
                if(atual > maior){
                    segMaior = maior;
                    iSegMaior = iMaior;

                    maior = atual;
                    iMaior = i;
                }else {
                    segMaior = atual;
                    iSegMaior = i;
                }

            }
        }
        printf("%d\n", iSegMaior+1);

    }

    return 0;
}
