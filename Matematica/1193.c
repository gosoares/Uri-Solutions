#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;

    scanf("%d", &n);

    char tipo[5], num[33];

    int i;
    for(i = 1; i <= n; i++){

        scanf("%s %s", num, tipo);

        printf("Case %d:\n", i);

        if(strcmp(tipo, "bin") == 0){
            unsigned long int decimal = 0;

            int t = strlen(num) - 1;
            int m = 1;

            for(;t >=0; t--){
                if(num[t] == '1')
                    decimal += m;
                m *=2;
            }

            printf("%lu dec\n", decimal);
            printf("%lx hex\n", decimal);
        }else if(strcmp(tipo, "dec") == 0){

            unsigned long int dec = atoi(num);

            printf("%lx hex\n", dec);

            if(dec == 0){
                printf("0 bin\n");
            }else {
                char bin[32];
                unsigned long int aux=dec;
                int j;
                for(j = 0; aux > 0; j++){
                    bin[j] = aux%2;
                    aux /= 2;
                }
                for(j--; j>=0; j--)
                    printf("%d", bin[j]);
                printf(" bin\n");
            }

        }else if(strcmp(tipo, "hex") == 0){
            unsigned long int dec = 0;
            int m = 1;
            int t = strlen(num) - 1;

            int s;
            for(;t>=0;t--){
                if(num[t] <= '9')
                    s='0';
                else if(num[t] >= 'a')
                    s='a'-10;

                dec += (num[t]-s)*m;
                m*=16;
            }

            printf("%lu dec\n", dec);

            if(dec == 0){
                printf("0 bin\n");
            }else {
                char bin[32];
                int j;
                for(j = 0; dec > 0; j++){
                    bin[j] = dec%2;
                    dec /= 2;
                }
                for(j--; j>=0; j--)
                    printf("%d", bin[j]);
                printf(" bin\n");
            }

        }

        printf("\n");
    }
    return 0;
}
