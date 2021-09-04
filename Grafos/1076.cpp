#include <iostream>
#include <vector>

using namespace std;

struct Grafo{
    int v, e, qtdDfs;

    vector<int> *adj;
    bool *visitado;

    Grafo(int v, int e){
        this->v = v;
        this->e = e;
        qtdDfs = 0;
        adj = new vector<int>[v];
        visitado = new bool[v]{false};
    }

    void addAresta(int x, int y){
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    bool foiVisitado(int v){
        return visitado[v];
    }

    void dfs(int v);

};

void Grafo::dfs(int v){

    int vizinho;

    visitado[v] = true;
    for(int i = 0; i < adj[v].size(); i++){
        vizinho = adj[v][i];
        if(!foiVisitado(vizinho)){
            dfs(vizinho);
            qtdDfs += 2;
        }
    }

}

int main(){

    int t, n, v, a, x, y;
    cin >> t;

    while(t--){
        cin >> n;

        cin >> v >> a;

        Grafo grafo(v, a);

        for(int i = 0; i < a; i++){
            cin >> x >> y;
            grafo.addAresta(x, y);
        }

        grafo.dfs(n);

        cout << grafo.qtdDfs << endl;


    }

    return 0;
}
