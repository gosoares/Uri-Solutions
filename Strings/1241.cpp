#include <iostream>

using namespace std;

int main() {

    string a, b;
    int n;

    cin >> n;

    while(n--){
        cin >> a >> b;

        if(a.size() > b.size())
            a = a.substr(a.size() - b.size(), b.size());

        if(a.size() == b.size() && a == b)
            cout << "encaixa" << endl;
        else
            cout << "nao encaixa" << endl;

    }

    return 0;
}
