#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    float preco[] = {0, 4, 4.5, 5, 2, 1.5};

    int cod, qtd;

    cin >> cod >> qtd;

    float total = preco[cod]*qtd;

    printf("Total: R$ %.2f\n", total);

    return 0;
}
