#include <iostream>
#include <list>
#include <queue>

using namespace std;

class Graph{
    int V;
public:
    list<int>* adj;
    Graph(int V);
    ~Graph();

    void addEdge(int a, int b);

    int shortestPath(int a, int b);

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

int Graph::shortestPath(int a, int b){

    int visited[V];
    int parent[V];

    for(int i = 0; i < V; i++){
        visited[i] = false;
        parent[i] = -1;
    }

    queue<int> fila;

    visited[a] = true;
    fila.push(a);

    int v;
    while(!fila.empty()){
        v = fila.front();
        fila.pop();

        for(list<int>::iterator i = adj[v].begin(); i != adj[v].end(); i++){
            if(!visited[*i]){
                parent[*i] = v;
                visited[*i] = true;
                fila.push(*i);
            }

            if(*i == b){
                int c = 0;

                while(parent[b] >= 0){
                    c++;
                    b = parent[b];
                }
                return c;
            }

        }

    }


}

int vertice(int x, int y){
    return 8*x+y;
}

int main() {

    Graph g(8*8);

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){

            if(i + 2 < 8){
                if(j+1 < 8){
                    g.addEdge(vertice(i, j), vertice(i+2, j+1));
                }

                if(j-1 >= 0){
                    g.addEdge(vertice(i, j), vertice(i+2, j-1));
                }
            }

            if(i - 2 >= 0){
                if(j+1 < 8){
                    g.addEdge(vertice(i, j), vertice(i-2, j+1));
                }

                if(j-1 >= 0){
                    g.addEdge(vertice(i, j), vertice(i-2, j-1));
                }
            }

            if(j + 2 < 8){
                if(i+1 < 8){
                    g.addEdge(vertice(i, j), vertice(i+1, j+2));
                }

                if(i-1 >= 0){
                    g.addEdge(vertice(i, j), vertice(i-1, j+2));
                }
            }

            if(j - 2 >= 0){
                if(i+1 < 8){
                    g.addEdge(vertice(i, j), vertice(i+1, j-2));
                }

                if(i-1 >= 0){
                    g.addEdge(vertice(i, j), vertice(i-1, j-2));
                }
            }

        }
    }

    string line;

    while(getline(cin, line)){

        cout << "To get from " << line[0] << line[1] << " to " << line[3] << line[4] << " takes ";
        cout << g.shortestPath(vertice(line[0]-'a', line[1]-'1'), vertice(line[3]-'a', line[4]-'1'));
        cout << " knight moves." << endl;

    }

    return 0;
}
