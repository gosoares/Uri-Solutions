#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){

    int n, comando, x;
    bool isStack, isQueue, isPriorityQueue;
    stack<int> pilha;
    queue<int> fila;
    priority_queue<int> filaPrioridade;

    while(cin >> n){

        while(!pilha.empty())
            pilha.pop();
        while(!fila.empty())
            fila.pop();
        while(!filaPrioridade.empty())
            filaPrioridade.pop();

        isStack = true, isQueue = true, isPriorityQueue = true;

        while(n--){
            cin >> comando >> x;

            if(comando == 1){
                pilha.push(x);
                fila.push(x);
                filaPrioridade.push(x);
            }else {
                if(pilha.top() != x)
                    isStack = false;

                if(fila.front() != x)
                    isQueue = false;

                if(filaPrioridade.top() != x)
                    isPriorityQueue = false;

                pilha.pop();
                fila.pop();
                filaPrioridade.pop();
            }

        }

        int c = 0;

        if(isStack)
            c++;
        if(isQueue)
            c++;
        if(isPriorityQueue)
            c++;

        if(c == 0){
            cout << "impossible" << endl;
        }else if(c > 1){
            cout << "not sure" << endl;
        }else{
            if(isStack)
                cout << "stack" << endl;
            else if(isQueue)
                cout << "queue" << endl;
            else
                cout << "priority queue" << endl;
        }


    }

    return 0;
}
