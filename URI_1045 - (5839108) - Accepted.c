#include <stdio.h>

int main(){

    double a, b, c, aux;

    scanf("%lf %lf %lf", &a, &b, &c);

    if(b > a){
        aux = b;
        b = a;
        a = aux;
    }
    if(c > a){
        aux = c;
        c = a;
        a = aux;
    }
    if(c > b){
        aux = c;
        c = b;
        b = aux;
    }

    if(a >= b + c)
        printf("NAO FORMA TRIANGULO\n");
    else{
        if(a*a == b*b + c*c)
            printf("TRIANGULO RETANGULO\n");
        else if(a*a > b*b + c*c)
            printf("TRIANGULO OBTUSANGULO\n");
        else if(a*a < b*b + c*c)
            printf("TRIANGULO ACUTANGULO\n");

        if(a == b && b == c)
            printf("TRIANGULO EQUILATERO\n");
        else if(a == b || a == c || b == c)
            printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
