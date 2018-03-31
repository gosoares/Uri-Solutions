#include <iostream>

using namespace std;

int main() {

    int n, i, maior;
    int o[26]; // ocorrencias
    string line;

    cin >> n;
    cin.ignore();

    while(n--){
        for(i = 0; i < 26; i++)
            o[i] = 0;

        getline(cin, line);

        for(i = 0; i < line.size(); i++){
            if(line[i] >= 'a' && line[i] <= 'z')
                o[line[i]-'a']++;
            else if(line[i] >= 'A' && line[i] <= 'Z')
                o[line[i]-'A']++;
        }

        maior = 0;
        for(i = 0; i < 26; i++){
            if(o[i] > maior)
                maior = o[i];
        }

        for(i = 0; i < 26; i++){
            if(o[i] == maior)
                cout << (char)(i + 'a');
        }
        cout << endl;

    }

    return 0;
}
