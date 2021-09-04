#include <iostream>
#include <map>
#include <sstream>

using namespace std;

int main() {

    map<string, int> variaveis;
    string line, variavel, v;
    char c;
    stringstream ss;
    int a, b;

    while(getline(cin, line)){
        ss.clear();
        ss.str(line);

        ss >> variavel;
        ss >> line; // le :=

        if(ss.str().find('+') != string::npos){

            ss.get();
            c = ss.peek();
            if(c < '0' || c > '9'){
                ss >> v;
                a = variaveis[v];
            }else{
                ss >> a;
            }

            ss >> line; // le +

            ss.get();
            c = ss.peek();
            if(c < '0' || c > '9'){
                ss >> v;
                b = variaveis[v];
            }else{
                ss >> b;
            }

            variaveis[variavel] = a + b;
        }else{
            ss >> a;
            variaveis[variavel] = a;
        }

    }

    cout << variaveis[variavel] << endl;

    return 0;
}
