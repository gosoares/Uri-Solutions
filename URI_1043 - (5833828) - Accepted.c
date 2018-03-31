#include<stdio.h>

int main() {
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a + b > c && b + c > a && a + c > b){
        double per = a + b + c;
        printf("Perimetro = %.1f\n",per);
    } else{
        double area = .5*(a+b)*c;
        printf("Area = %.1f\n", area);
    }

    return 0;
}
