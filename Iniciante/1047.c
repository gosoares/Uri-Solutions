#include <stdio.h>

int main(){

    int hi, mi, hf, mf, hd, md;

    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    if(hi < hf)
        hd = hf - hi;
    else
        hd = 24 - hi  + hf;

    if(mi <= mf)
        md = mf - mi;
    else{
        md = 60 - mi + mf;
        hd--;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hd, md);

    return 0;
}
