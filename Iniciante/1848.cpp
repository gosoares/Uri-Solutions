#include <iostream>
#include <cstring>

using namespace std;

int main() {

    string s;

    int n = 3, soma = 0, x;

    while(n > 0){
        getline(cin, s);

        if(s == "caw caw"){
            cout << soma << endl;
            n--;
            soma = 0;
        }else {
            if(s[0] == '*')
                soma += 4;
            if(s[1] == '*')
                soma += 2;
            if(s[2] == '*')
                soma += 1;
        }

    }

    return 0;
}
