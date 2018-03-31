#include <iostream>
#include <vector>

using namespace std;

struct Grafo{
    int v, e;

    vector<int> *adj;
    bool *visitado;

    Grafo(int v, int e){
        this->v = v;
        this->e = e;
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

    void visitaComponente(int v);

};

void Grafo::visitaComponente(int v){

    int vizinho;

    visitado[v] = true;
    for(int i = 0; i < adj[v].size(); i++){
        vizinho = adj[v][i];
        if(!foiVisitado(vizinho)){
            visitaComponente(vizinho);
        }
    }

}

int main(){

    char x, y;
    int n, v, e, componentes;
    cin >> n;

    for(int caso = 1; caso <= n; caso++){

        cin >> v >> e;

        Grafo grafo(v, e);

        for(int i = 0; i < e; i++){
            cin >> x >> y;
            grafo.addAresta(x - 'a', y - 'a');
        }


        cout << "Case #" << caso << ":" << endl;

        bool *printado = new bool[v]{false};
        int naoVisitado = 0;

        componentes = 0;
        while(naoVisitado >= 0){
            componentes++;

            int atual = naoVisitado;
            naoVisitado = -1;

            grafo.visitaComponente(atual);


            for(int i = atual; i < v; i++){
                if(grafo.foiVisitado(i)){
                    if(!printado[i]){
                        cout << (char) (i + 'a') << ",";
                        printado[i] = true;
                    }
                }else if(naoVisitado < 0){
                        naoVisitado = i;
                }

            }
            cout << endl;

        }

        cout << componentes << " connected components" << endl << endl;

    }

    return 0;
}
