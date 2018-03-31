#include <iostream>
#include <vector>

using namespace std;

int main(){


    vector<int> perguntas(101, 0);
    int n, k, x, qtd;

    while(cin >> n >> k){
        if(n == 0 && k == 0)
            break;

        while(n--){
            cin >> x;
            perguntas[x]++;
        }

        qtd = 0;
        for(int i = 1; i <= 100; i++){
            if(perguntas[i] >= k)
                qtd++;
            perguntas[i] = 0;
        }

        cout << qtd << endl;
    }

    return 0;
}
