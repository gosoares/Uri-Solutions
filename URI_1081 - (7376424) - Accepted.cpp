#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

void printSpaces(int qtd);

class Graph{
private:
    int V;
    list<int> *adj;
    void dfsAux(int v, bool *visitado, int nivelRecursao);

public:
    Graph(int V);
    void addEdge(int a, int b);
    void dfs();
};

Graph::Graph(int V){
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int a, int b){
    adj[a].push_back(b);
}

void Graph::dfsAux(int v, bool *visitado, int nivelRecursao){
    visitado[v] = true;
    adj[v].sort();
    for(list<int>::iterator i = adj[v].begin(); i != adj[v].end(); i++){
        printSpaces(2*nivelRecursao);
        cout << v << "-" << *i;
        if(!visitado[*i]){
            cout << " pathR(G," << *i << ")" << endl;
            dfsAux(*i, visitado, nivelRecursao+1);
        }else{
            cout << endl;
        }
    }
}

void Graph::dfs(){
    bool visitado[this->V];
    for(int i = 0; i < V; i++)
        visitado[i] = false;

    for(int i = 0; i < V; i++){
        if(!visitado[i]){
            dfsAux(i, visitado, 1);
            if(adj[i].size() > 0)
                cout << endl;
        }
    }
}

void printSpaces(int qtd){
    while(qtd--)
        cout << ' ';
}

int main() {

    int n, v, e, a, b;

    cin >> n;

    for(int caso = 1; caso <= n; caso++){

        cin >> v >> e;

        Graph g(v);

        for(int i = 0; i < e; i++){
            cin >> a >> b;
            g.addEdge(a, b);
        }

        cout << "Caso " << caso << ":" << endl;
        g.dfs();

    }


    return 0;
}
