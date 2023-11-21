#include <iostream>
#include <stack>

using namespace std;

int main() {

    int n, i, x, qtdLidos;

    while(true){
        cin >> n;
        if(n == 0)
            break;


        while(true){
            cin >> x;
            if(x == 0)
                break;
            qtdLidos = 1;

            stack<int> estacao;


            for(i = 1; i <= n; i++){
                estacao.push(i);
                while(!estacao.empty() && estacao.top() == x){
                    estacao.pop();
                    if(qtdLidos++ < n){
                        cin >> x;
                    }
                }
            }

            while(qtdLidos++ < n)
                cin >> x;

            if(estacao.empty())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;

        }

        cout << endl;
    }

    return 0;
}
