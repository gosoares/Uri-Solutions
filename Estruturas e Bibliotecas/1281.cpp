#include <iostream>
#include <map>
#include <cstring>
#include <stdio.h>

using namespace std;

int main() {

    int n, m, qtd;

    char nome[50];
    float valor, total;

    cin >> n; cin.ignore();

    while(n--){

        total = 0;

        cin >> m; cin.ignore();

        map<string, float> frutas;

        while(m--){
            scanf("%s %f", nome, &valor);
            //fflush(stdin);
            frutas.insert(pair<string, float>(nome, valor));
        }

        cin >> m; cin.ignore();

        while(m--){
            scanf("%s %d", nome, &qtd);

            total += qtd*(frutas[nome]);
        }


        printf("R$ %.2f\n", total);
    }

    return 0;
}
