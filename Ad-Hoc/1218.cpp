#include <iostream>
#include <set>
#include <sstream>

using namespace std;

int main(){

    int n, tamanho, masculino, feminino;
    char s;
    string line;
    istringstream ss;
    bool nPrimeiro = false;

    for(int caso = 1; cin >> n; caso++){

        masculino = 0;
        feminino = 0;

        cin.ignore();
        getline(cin, line);
        ss.clear();
        ss.str(line);

        while(ss >> tamanho >> s){
            if(tamanho == n){
                if(s == 'F')
                    feminino++;
                else
                    masculino++;
            }
        }

        if(nPrimeiro)
            cout << endl;
        else
            nPrimeiro = true;
        cout << "Caso " << caso << ":" << endl;
        cout << "Pares Iguais: " << feminino + masculino << endl;
        cout << "F: " << feminino << endl;
        cout << "M: " << masculino << endl;


    }

    return 0;
}
