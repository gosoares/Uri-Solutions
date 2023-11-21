#include <iostream>
#include <vector>
// 0 = Nao descoberto
// 1 == Descoberto
// 2 == Processado

using namespace std;

typedef struct {
    vector<int> vizinhos;
    int state;
}Node;

void DFS(vector<Node> &Grafo, Node &No){
    No.state = 1;
    for(unsigned int i = 0; i < No.vizinhos.size(); i++){
        if(Grafo[No.vizinhos[i]].state == 0 )
            DFS(Grafo, Grafo[No.vizinhos[i]]);
    }
    No.state = 2;
}



int main()
{
    vector<Node> Grafo;
    int t, n, m, x, y, p, c = 0;

    cin >> t;

    while(t--){
        c++;

        cin >> n;
        cin >> m;

        Grafo.clear();
        Grafo.push_back({});

        for(int i = 1; i <= n; i++){
            Node n;
            n.state = 0;
            Grafo.push_back(n);
        }

        for(int i = 1; i <= m; i++ ){
            cin >> x >> y;

            Grafo[x].vizinhos.push_back(y);
            Grafo[y].vizinhos.push_back(x);
        }

        p = -1;
        for(int i = 1; i <= n; i++){
            if(Grafo[i].state != 2){
                p++;
                DFS(Grafo, Grafo[i]);
            }

        }

        cout << "Caso #" << c << ": ";
        if(p == 0)
            cout << "a promessa foi cumprida" << endl;
        else
            cout << "ainda falta(m) " << p << " estrada(s)" << endl;
    }



}
