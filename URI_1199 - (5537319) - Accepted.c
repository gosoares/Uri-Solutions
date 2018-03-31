#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char num[11];

    while(1){

        scanf("%s", num);
        if(num[0] == '-')
            break;

        unsigned long int decimal = 0;

        if(num[1] == 'x'){
            int i = strlen(num) - 1;
            int m = 1, n;

            for(; i >= 2; i--){
                if(num[i] <= '9')
                    n = num[i] - '0';
                else if(num[i] >= 'a')
                    n = num[i] - 'a' + 10;
                else
                    n = num[i] - 'A' + 10;
                decimal += n * m;
                m *= 16;
            }
            printf("%lu\n", decimal);
        }else {
            printf("0x");
            decimal = atoi(num);
            if(decimal == 0)
                printf("0");
            else {
                char hexa[8];
                int resto;

                int i;
                for(i = 0; decimal > 0; i++){
                    resto = decimal % 16;
                    if(resto <= 9)
                        hexa[i] = resto + '0';
                    else
                        hexa[i] = resto - 10 + 'A';
                    decimal /= 16;
                }
                for(i--; i>=0; i--)
                    printf("%c", hexa[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
