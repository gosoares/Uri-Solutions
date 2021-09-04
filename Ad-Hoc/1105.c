#include <stdio.h>

int main() {

    int i, b, n, reserva[21], d, c, v, possivel;


    while(1){
        scanf("%d %d", &b, &n);
        if(b == 0 && n == 0)
            break;

        for(i = 1; i <= b; i++){
            scanf("%d", &reserva[i]);
        }

        for(i = 0; i < n; i++){
            scanf("%d %d %d", &d, &c, &v);
            reserva[d] -= v;
            reserva[c] += v;
        }

        for(i = 1, possivel = 1; i <= b; i++){
            if(reserva[i] < 0){
                possivel = 0;
                break;
            }
        }

        if(possivel){
            printf("S\n");
        }else{
            printf("N\n");
        }

    }

    return 0;
}
