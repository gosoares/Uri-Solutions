#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<string> strings;
    string s;
    int maior;
    bool primeiro = true;

    int n, i;
    while(cin >> n){
        if(n == 0)
            break;

        if(!primeiro)
            cout << endl;
        else
            primeiro = false;

        cin.ignore();

        strings.clear();
        maior = 0;
        while(n--){
            cin >> s;
            strings.push_back(s);

            if(s.size() > maior)
                maior = s.size();

        }

        for(n = 0; n < strings.size(); n++){
            for(i = 0; i < maior - strings[n].size(); i++)
                cout << ' ';

            cout << strings[n] << endl;
        }

    }

    return 0;
}
