#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

    int m, n;

    map<string, unsigned long> dictionary;
    map<string, unsigned long>::iterator dit;
    string word;
    unsigned long value;

    while(cin >> m >> n){
        dictionary.clear();

        while(m--){
            cin >> word  >> value;
            dictionary[word] = value;
        }

        while(n--){
            value = 0;
            while(cin >> word && word != "."){
                dit = dictionary.find(word);
                if(dit != dictionary.end()){
                    value += dit->second;
                }
            }
            cout << value << endl;
        }

    }

	return 0;
}
