#include <iostream>

using namespace std;

char lowCase(char c){
    if(c < 91)
        c += 32;

    return c;
}

int main() {

    string line;
    int aliteracoes, qtdAtual;
    char atual;

    while(getline(cin, line)){

        aliteracoes = 0;
        atual = lowCase(line[0]);
        qtdAtual = 1;

        for(int i = 1; i < line.size(); i++){
            if(line[i - 1] == ' '){
                if(lowCase(line[i]) == atual){
                    qtdAtual++;
                }else{
                    if(qtdAtual > 1)
                        aliteracoes++;

                    qtdAtual = 1;
                    atual = lowCase(line[i]);
                }
            }
        }

        if(qtdAtual > 1)
            aliteracoes++;

        cout << aliteracoes << endl;
    }

    return 0;
}
