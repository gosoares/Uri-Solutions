#include <bits/stdc++.h>

#define INF 999999

using namespace std;


int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

    char alphabet['z' - 'a' + 1];
    for(char c = 'a'; c <= 'z'; c++){
        alphabet[c-'a'] = c;
    }

    map<string, int> dictionary;
    map<string, int>::iterator dit;
	string word, correct, scopy;
	int n, indexCorrect;
    char aux;

	cin >> n;

    for(int i = 0; i < n; i++){
        cin >> word;
        dictionary[word] = i;
    }

    cin >> n;


    while(n--){

        indexCorrect = INF;

        cin >> word;

        if(dictionary.count(word)){
            cout << word << " is correct" << endl;
            continue;
        }


        // VERIFICA TODAS AS POSSIVEIS TROCAS DE LETRAS
        for(auto &letter : word){
            aux = letter;
            for(auto &l : alphabet){
                letter = l;

                dit = dictionary.find(word);

                if(dit != dictionary.end() && dit->second < indexCorrect){
                    indexCorrect = dit->second;
                    correct = word;
                }

            }
            letter = aux;
        }

        // VERIFICA TODAS AS POSSIVEIS TROCAS DE LETRAS ADJACENTES
        for(int i = 1; i < word.size(); i++){
            aux = word[i-1];
            word[i-1] = word[i];
            word[i] = aux;

            dit = dictionary.find(word);
            if(dit != dictionary.end() && dit->second < indexCorrect){
                indexCorrect = dit->second;
                correct = word;
            }

            aux = word[i-1];
            word[i-1] = word[i];
            word[i] = aux;

        }

        // VERIFICA TODAS AS POSSIVEIS ELIMINACOES DE UMA LETRA DA STRING
        scopy = word.substr(1, word.size() - 1);
        dit = dictionary.find(scopy);
        if(dit != dictionary.end() && dit->second < indexCorrect){
            indexCorrect = dit->second;
            correct = scopy;
        }
        for(int i = 0; i < scopy.size(); i++){
            scopy[i] = word[i];

            dit = dictionary.find(scopy);
            if(dit != dictionary.end() && dit->second < indexCorrect){
                indexCorrect = dit->second;
                correct = scopy;
            }
        }

        // VERIFICA TODAS AS POSSIVEIS INSERCOES DE UMA LETRA NA STRING
        scopy = 'a' + word;
        for(int i = 0; i < scopy.size(); i++){

            for(auto &letter : alphabet){
                scopy[i] = letter;
                dit = dictionary.find(scopy);
                if(dit != dictionary.end() && dit->second < indexCorrect){
                    indexCorrect = dit->second;
                    correct = scopy;
                }
            }

            if(i+1 < scopy.size())
                scopy[i] = scopy[i+1];

        }

        if(indexCorrect < INF){
            cout << word << " is a misspelling of " << correct << endl;
        }else{
            cout << word << " is unknown" << endl;
        }

    }

	return 0;
}
