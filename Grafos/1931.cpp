#include <iostream>
#include <vector>
#include <map>
#include <limits>
#include <queue>


using namespace std;

int dijkstra(const vector<map<int, int> >& adj, int source, int dest) {
    vector<int> dist(adj.size(), numeric_limits<int>::max());
    vector<bool> visited(adj.size(), false);
    vector<int> edges(adj.size());

    dist[source] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
    pq.push(make_pair(0, source));

    while (!pq.empty() && pq.top().second != dest) {
        int u = pq.top().second;
        pq.pop();

        visited[u] = true;

        for (const auto& a : adj[u]) {
            if (dist[u] + a.second < dist[a.first]) {
                dist[a.first] = dist[u] + a.second;
                edges[a.first] = u;

                pq.push(make_pair(dist[a.first], a.first));
            }
        }

    }

    return dist[dest];
}

int main() {

    int c, v, c1, c2, g;
    cin >> c >> v;

    vector<map<int, int> > adjList(c);
    while (v--) {
        cin >> c1 >> c2 >> g;
        c1--; c2--;
        adjList[c1][c2] = g;
        adjList[c2][c1] = g;
    }

    // transform each par of edges (c1, c2, g1) (c2, c3, g2) in a edge (c1, c3, g1 + g2)
    vector<map<int, int> > adj(c);

    for (int i = 0; i < c; i++) {
        for (const auto& a : adjList[i]) {
            for (const auto& b : adjList[a.first]) {
                if (b.first == i) continue;
                // check if exists a edge between i and b.c
                const auto& it = adj[i].find(b.first);

                int tg = a.second + b.second;

                if (it != adj[i].end()) {
                    if (tg < (*it).second) {
                        (*it).second = tg;
                    }
                } else {
                    adj[i][b.first] = tg;
                }
            }
        }
    }

    int d = dijkstra(adj, 0, c-1);
    if (d == numeric_limits<int>::max()) 
        d = -1;

    cout << d << endl;

    return 0;
}