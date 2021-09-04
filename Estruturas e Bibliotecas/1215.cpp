#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

    set<string> dictionary;
    string word, w;
    stringstream ss;

    while(cin >> word){

        for(auto &letter : word){
            if(letter >= 'a' && letter <= 'z'){
                ss << letter;
            }else if(letter >= 'A' && letter <= 'Z'){
                ss << (char) (letter - 'A' + 'a');
            }else{
                w = ss.str();
                if(w != ""){
                    dictionary.insert(ss.str());
                    ss.clear();
                    ss.str("");
                }
            }

        }

        w = ss.str();
        if(w != ""){
            dictionary.insert(ss.str());
            ss.clear();
            ss.str("");
        }

    }

    for(auto &s : dictionary)
        cout << s << endl;

	return 0;
}
