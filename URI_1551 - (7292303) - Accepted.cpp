#include <iostream>

using namespace std;

int main(){

    int n, aparece['z' - 'a' + 1], letras;
    string line;

    for(int i = 0; i <= 'z' - 'a'; i++)
        aparece[i] = 0;

    cin >> n;
    cin.ignore();
    while(n--){

        getline(cin, line);

        for(int i = 0; i < line.size(); i++){
            if(line[i] >= 'a' && line[i] <= 'z'){
                aparece[line[i] - 'a']++;
            }
        }

        letras = 0;

        for(int i = 0; i <= 'z' - 'a'; i++){
            if(aparece[i] > 0){
                letras++;
                aparece[i] = 0;
            }
        }

        if(letras == 26){
            cout << "frase completa" << endl;
        }else if(letras >= 13){
            cout << "frase quase completa" << endl;
        }else {
            cout << "frase mal elaborada" << endl;
        }

    }

    return 0;
}
