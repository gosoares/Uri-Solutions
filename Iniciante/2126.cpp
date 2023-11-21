#include <iostream>

using namespace std;

int main() {

    string n1, n2;
    int i, caso = 0, qtd, pos, j;

    while(cin >> n1 >> n2){
        i = -1;
        qtd = 0;
        while(++i <= n2.size() - n1.size()){
            for(j = 0; n1[j] != '\0' && n1[j] == n2[i+j]; j++);
            if(j == n1.size()){
                qtd++;
                pos = i+1;
            }
        }

        cout << "Caso #" << ++caso << ":" << endl;
        if(qtd > 0){
            cout << "Qtd.Subsequencias: " << qtd << endl;
            cout << "Pos: " << pos << endl;
        }else{
            cout << "Nao existe subsequencia" << endl;
        }
        cout << endl;
    }

    return 0;
}
