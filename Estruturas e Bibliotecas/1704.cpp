#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct Tarefa{
    int v;
    int t;
} Tarefa;

bool ord(Tarefa t1, Tarefa t2){
    return t1.v > t2.v;
}

int main() {

    int n, h, v, t, i, j, qtdExec, valorTotal;

    vector<Tarefa> tarefas;

    while(cin >> n >> h){

        valorTotal = 0;
        for(i = 0; i < n; i++){
            cin >> v >> t;
            Tarefa ta = {v, t};
            tarefas.push_back(ta);
            valorTotal += v;
        }

        sort(tarefas.begin(), tarefas.end(), ord);

        bool executadas[h+1];
        for(i = 1; i <= h; i++)
            executadas[i] = false;

        qtdExec = 0;
        for(i = 0; qtdExec < h && i < n; i++){
            for(j = tarefas[i].t; j > 0; j--){
                if(executadas[j] == false){
                    executadas[j] = true;
                    valorTotal -= tarefas[i].v;
                    qtdExec++;
                    break;
                }
            }
        }

        cout << valorTotal << endl;

        tarefas.clear();
    }

    return 0;
}
