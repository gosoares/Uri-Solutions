#include <iostream>
#include <list>

using namespace std;

class Graph{
private:
    int V;
    list<int> *adj;
    Graph getTranspose();
    void dfsAux(int v, bool *visitado);

public:
    Graph(int V);
    ~Graph();
    void addEdge(int a, int b);
    bool isStronglyConnected();
};

Graph::Graph(int V){
    this->V = V;
    adj = new list<int>[V];
}

Graph::~Graph(){
    delete[] adj;
}

void Graph::addEdge(int a, int b){
    adj[a].push_back(b);
}

Graph Graph::getTranspose(){
    Graph g(V);

    for(int i = 0; i < V; i++){
        for(list<int>::iterator it = adj[i].begin(); it != adj[i].end(); it++){
            g.adj[*it].push_back(i);
        }
    }

    return g;
}

void Graph::dfsAux(int v, bool *visitado){
    visitado[v] = true;

    for(list<int>::iterator i = adj[v].begin(); i != adj[v].end(); i++){
        if(!visitado[*i])
            dfsAux(*i, visitado);
    }

}

bool Graph::isStronglyConnected(){
    bool visitado[V];

    for(int i = 0; i < V; i++)
        visitado[i] = false;

    dfsAux(0, visitado);

    for(int i = 1; i < V; i++){
        if(!visitado[i])
            return false;
    }

    Graph g = getTranspose();

    for(int i = 0; i < V; i++)
        visitado[i] = false;

    g.dfsAux(0, visitado);

    for(int i = 1; i < V; i++){
        if(!visitado[i])
            return false;
    }

    return true;
}


int main(){

    int n, m, v, w, p;

    while(cin >> n >> m){
        if(n == 0 && m == 0)
            return false;

        Graph g(n);

        for(int i = 0; i < m; i++){
            cin >> v >> w >> p;

            g.addEdge(v-1, w-1);

            if(p == 2)
                g.addEdge(w-1, v-1);
        }

        cout << (g.isStronglyConnected() ? 1 : 0) << endl;

    }

    return 0;
}
