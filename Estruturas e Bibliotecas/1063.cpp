#include <iostream>
#include <stack>

using namespace std;

int main() {

    int n, a, b;
    char vagao;

    while(cin >> n){
        if(n == 0)
            break;

        char ladoA[n], ladoB[n];

        for(int i = 0; i < n; i++)
            cin >> ladoA[i];

        for(int i = 0; i < n; i++)
            cin >> ladoB[i];

        stack<int> saida;

        a = 0, b = 0;
        while(a < n || b < n){
            if(!saida.empty() && saida.top() == ladoB[b]){
                saida.pop();
                b++;
                cout << "R";
            }else if(a < n){
                saida.push(ladoA[a]);
                a++;
                cout << "I";
            }else {
                cout << " Impossible";
                break;
            }
        }

        cout << endl;

    }

    return 0;
}
