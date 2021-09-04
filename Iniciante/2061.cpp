#include <iostream>

using namespace std;

int main() {

    int n, m;

    cin >> n >> m;

    string acao;

    while(m--){
        cin >> acao;

        if(acao == "clicou")
            n--;
        else
            n++;
    }

    cout << n << endl;

    return 0;
}
