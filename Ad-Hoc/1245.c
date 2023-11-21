#include <stdio.h>

int e[31], d[31];

int main(){

    int n;

    while(scanf("%d", &n) != EOF){
        int m;
        char l;

        int i;
        for(i = 0; i < n; i++){
            scanf("%d %c", &m, &l);

            if(l == 'E'){
                e[m-30]++;
            }else{
                d[m-30]++;
            }
        }

        int total = 0;

        for(i = 0; i <= 30; i++){
            if(e[i] <= d[i]){
                total += e[i];
            }else{
                total += d[i];
            }
            e[i] = 0;
            d[i] = 0;
        }
        printf("%d\n", total);

    }

    return 0;
}
