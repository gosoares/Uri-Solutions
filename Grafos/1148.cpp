#include <iostream>
#define MAX_NODES 501
#define INFINITY 999999

using namespace std;

struct Graph{
    int nodes;
    int edges;
    int way[MAX_NODES][MAX_NODES];
} graph;


int dist[MAX_NODES];
bool passed[MAX_NODES];

int dijkstra(int actual, int dest){
    int minimum, i;

    for(i = 1; i <= graph.nodes; i++){
        dist[i] = INFINITY;
        passed[i] = false;
    }

    dist[actual] = 0;

    while(actual != dest){
        for(i = 1; i <= graph.nodes; i++){
            if(dist[actual] + graph.way[actual][i] < dist[i]){
                dist[i] = dist[actual] + graph.way[actual][i];
            }
        }

        minimum = INFINITY;
        passed[actual] = true;

        for(i = 1; i <= graph.nodes; i++){
            if(!passed[i] && dist[i] < minimum){
                minimum = dist[i];
                actual = i;
            }
        }

        if(minimum == INFINITY)
            return INFINITY;
    }

    return dist[dest];
}

int main() {

    int i, j, origin, dest, weight, consults;

    while(cin >> graph.nodes >> graph.edges){
        if(graph.nodes == 0 && graph.edges == 0)
            break;

        for(i = 1; i <= graph.nodes; i++){
            for(j = 1; j <= graph.nodes; j++){
                graph.way[i][j] = INFINITY;
            }
        }

        for(i = 0; i < graph.edges; i++){
            cin >> origin >> dest >> weight;
            if(graph.way[dest][origin] != INFINITY){
                graph.way[dest][origin] = 0;
                graph.way[origin][dest] = 0;
            }else{
                graph.way[origin][dest] = weight;
            }
        }

        cin >> consults;

        while(consults--){
            cin >> origin >> dest;
            weight = dijkstra(origin, dest);

            if(weight == INFINITY)
                cout << "Nao e possivel entregar a carta" << endl;
            else
                cout << weight << endl;

        }

        cout << endl;
    }

    return 0;
}
