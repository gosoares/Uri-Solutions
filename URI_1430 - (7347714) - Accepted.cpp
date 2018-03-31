#include <iostream>
#include <map>

using namespace std;

int main(){

    map<char, int> duracoes;
    duracoes['W'] = 64;
    duracoes['H'] = 32;
    duracoes['Q'] = 16;
    duracoes['E'] = 8;
    duracoes['S'] = 4;
    duracoes['T'] = 2;
    duracoes['X'] = 1;

    int duracao, corretos;
    string composicao;

    while(getline(cin, composicao)){
        if(composicao == "*")
            break;

        duracao = 0;
        corretos = 0;

        for(int i = 1; i < composicao.size(); i++){
            if(composicao[i] == '/'){
                if(duracao == 64)
                    corretos++;

                duracao = 0;
            }else{
                duracao += duracoes[composicao[i]];
            }
        }

        cout << corretos << endl;

    }



    return 0;
}
