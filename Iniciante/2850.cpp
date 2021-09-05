#include <iostream>
 
using namespace std;
 
int main() {
 
    string s;

    while (getline(cin, s)) {
        if (s == "esquerda")
            cout << "ingles" << endl;
        else if (s == "direita")
            cout << "frances" << endl;
        else if (s == "nenhuma")
            cout << "portugues" << endl;
        else
            cout << "caiu" << endl;
    }
 
    return 0;
}