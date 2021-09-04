#include <iostream>

using namespace std;

int main() {

    int n;
    unsigned long long int carneiros = 0;

    cin >> n;

    int estrelas[n+1];

    for(int i = 1; i <= n; i++){
        cin >> estrelas[i];
        carneiros += estrelas[i];
    }



    int atual = 1, atacados = 0;

    while(estrelas[atual] > 0 && atual <= n && atual > 0){
        carneiros--;
        estrelas[atual]--;

        if(atual > atacados)
            atacados = atual;

        if(estrelas[atual] % 2 == 0)
            atual++;
        else
            atual--;
    }

    cout << atacados << " " << carneiros << endl;

    return 0;
}
