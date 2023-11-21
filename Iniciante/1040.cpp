#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    double n1, n2, n3, n4;

    cin >> n1 >> n2 >> n3 >> n4;

    double media = (n1*2 + n2*3 + n3 * 4 + n4) / 10;

    printf("Media: %.1lf\n", media);

    if(media >= 7)
        cout << "Aluno aprovado." << endl;
    else if(media < 5)
        cout << "Aluno reprovado." << endl;
    else {
        cout << "Aluno em exame." << endl;

        double ne;
        cin >> ne;
        printf("Nota do exame: %.1lf\n", ne);

        media = (media + ne) / 2;

        if(media >= 5)
            cout << "Aluno aprovado." << endl;
        else
            cout << "Aluno reprovado." << endl;

        printf("Media final: %.1lf\n", media);


    }

    return 0;
}
