#include <iostream>
#include <list>

using namespace std;


class Graph{
private:
    int V;
    list<int> *adj;
    bool temCicloAux(int v, bool *visitado, bool *recursion);

public:
    Graph(int V);
    void addEdge(int a, int b);
    bool temCiclo();
};

Graph::Graph(int V){
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int a, int b){
    adj[a].push_back(b);
}

bool Graph::temCicloAux(int v, bool *visitado, bool *recursion){

    if(recursion[v])
        return true;
    if(visitado[v])
        return false;

    visitado[v] = true;
    recursion[v] = true; // adiciona v na arvore de recursao

    for(list<int>::iterator i = adj[v].begin(); i != adj[v].end(); i++){
        if(temCicloAux(*i, visitado, recursion))
            return true;
    }

    recursion[v] = false;
    return false;
}

bool Graph::temCiclo(){
    bool visitado[V];
    bool recursion[V];

    for(int i = 0; i < V; i++){
        visitado[i] = false;
        recursion[i] = false;
    }

    for(int i = 0; i < V; i++){
        if(temCicloAux(i, visitado, recursion))
            return true;
    }

    return false;
}

int main() {

    int t, n, m, a, b;

    cin >> t;

    while(t--){

        cin >> n >> m;

        Graph g(n);

        for(int i = 0; i < m; i++){
            cin >> a >> b;
            g.addEdge(a-1, b-1);
        }

        cout << (g.temCiclo() ? "SIM" : "NAO") << endl;

    }


    return 0;
}
