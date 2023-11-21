#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

char tamanhos[] = {'P', 'M', 'G'};

struct Camisa{
    string nome;
    string cor;
    char tamanho;
};

bool sortCamisas(Camisa c1, Camisa c2){
    if(c1.cor == c2.cor){
        if(c1.tamanho == c2.tamanho){
            return c1.nome < c2.nome;
        }else{
            return c1.tamanho < c2.tamanho;
        }
    }else{
        return c1.cor < c2.cor;
    }

}

int main(){

    int n;
    string nome, cor;
    char tamanho;

    bool primeiro = true;

    while(cin >> n){
        if(n == 0)
            break;

        vector<Camisa> camisas(n);

        for(int i = 0; i < n; i++){
            cin.ignore();
            getline(cin, nome);
            cin >> cor >> tamanho;

            if(tamanho == 'P')
                tamanho = 0;
            else if(tamanho == 'M')
                tamanho = 1;
            else
                tamanho = 2;

            Camisa c;
            c.nome = nome;
            c.cor = cor;
            c.tamanho = tamanho;
            camisas[i] = c;
        }

        sort(camisas.begin(), camisas.end(), sortCamisas);

        if(!primeiro){
            cout << endl;
        }else{
            primeiro = false;
        }

        for(int i = 0; i < n; i++){
            cout << camisas[i].cor << " " << tamanhos[camisas[i].tamanho] << " " << camisas[i].nome << endl;
        }

    }

    return 0;
}
