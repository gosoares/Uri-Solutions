#include <stdio.h>

int main(){

    double salario, imposto = 0;

    scanf("%lf", &salario);

    if(salario > 2000){
        if(salario <= 3000){
            imposto += (salario - 2000) * 0.08;
        }else{
            imposto += 1000 * 0.08;

            if(salario <=  4500){
                imposto += (salario - 3000) * 0.18;
            }else {
                imposto += 1500 * 0.18 + (salario - 4500) * 0.28;
            }

        }

        printf("R$ %.2lf\n", imposto);
    }else {
        printf("Isento\n");
    }

    return 0;
}
