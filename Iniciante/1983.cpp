#include <iostream>

using namespace std;

int main(){

    int n, matriculaMaior, matricula;

    double maiorNota = -1, nota;

    cin >> n;

    while(n--){

        cin >> matricula >> nota;

        if(nota > maiorNota){
            maiorNota = nota;
            matriculaMaior = matricula;
        }

    }

    if(maiorNota >= 8)
        cout << matriculaMaior << endl;
    else
        cout << "Minimum note not reached" << endl;

    return 0;
}
