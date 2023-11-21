#include <stdio.h>

int main(){

    int diaInicio, horaInicio, minutoInicio, segundoInicio, diaFim, horaFim, minutoFim, segundoFim, segundosInicio, segundosFim, segundosDuracao;

    scanf("Dia %d\n", &diaInicio);
    scanf("%d : %d : %d\n", &horaInicio, &minutoInicio, &segundoInicio);
    scanf("Dia %d\n", &diaFim);
    scanf("%d : %d : %d", &horaFim, &minutoFim, &segundoFim);

    segundosInicio = diaInicio * 86400 + horaInicio * 3600 + minutoInicio * 60 + segundoInicio;
    segundosFim = diaFim * 86400 + horaFim * 3600 + minutoFim * 60 + segundoFim;
    segundosDuracao = segundosFim - segundosInicio;

    printf("%d dia(s)\n", segundosDuracao / 86400);
    segundosDuracao %= 86400;
    printf("%d hora(s)\n", segundosDuracao / 3600);
    segundosDuracao %= 3600;
    printf("%d minuto(s)\n", segundosDuracao / 60);
    printf("%d segundo(s)\n", segundosDuracao % 60);

    return 0;
}
