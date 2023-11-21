#include <iostream>

using namespace std;

char lowCase(char c){
    if(c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';

    return c;
}

int main() {

    string tag;
    int numero;
    string texto;
    bool naTag;


    while(cin >> tag >> numero){
        cin.ignore();
        getline(cin, texto);

        naTag = false;
        for(int i = 0; i < texto.size(); i++){
            if(texto[i] == '<'){
                naTag = true;
                cout << '<';
                continue;
            }else if(texto[i] == '>'){
                naTag = false;
                cout << '>';
                continue;
            }

            if(naTag && lowCase(texto[i]) == lowCase(tag[0]) && i+tag.size() < texto.size()){
                bool igual = true;
                for(int j = 1; j < tag.size(); j++){
                    if(lowCase(tag[j]) != lowCase(texto[i+j])){
                        igual = false;
                        break;
                    }
                }

                if(igual){
                    cout << numero;
                    i += tag.size() - 1;
                    continue;
                }else{
                    cout << texto[i];
                    continue;
                }
            }

            cout << texto[i];

        }

        cout << endl;

    }

    return 0;
}
