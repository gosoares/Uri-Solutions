#include <iostream>

using namespace std;

int main() {


    int c, f;
    string nome;

    cin >> c;

    while(c--){
        cin >> nome >> f;
        if(nome == "Thor")
            cout << 'Y' << endl;
        else
            cout << 'N' << endl;
    }

    return 0;
}
