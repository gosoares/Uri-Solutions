#include <iostream>
#include <vector>

using namespace std;

int main() {

    int t, l, c, p, k, qtd;
    string s;

    cin >> t;

    while(t--){

        cin >> l >> c;

        vector< vector<char> > palavras(l, vector<char>(c));

        for(int i = 0; i < l; i++)
            for(int j = 0; j < c; j++)
                cin >> palavras[i][j];

        cin >> p;

        while(p--){
            cin >> s;

            qtd = 0;

            for(int i = 0; i < l; i++){
                for(int j = 0; j < c; j++){

                    if(c - j >= s.size()){
                        for(k = 0; k < s.size() && s[k] == palavras[i][j+k]; k++);

                        if(k == s.size())
                            qtd++;
                    }
                    if(l - i >= s.size() && s.size() > 1){
                         for(k = 0; k < s.size() && s[k] == palavras[i+k][j]; k++);

                        if(k == s.size())
                            qtd++;
                    }

                }
            }

            cout << qtd << endl;

        }

    }

    return 0;
}
