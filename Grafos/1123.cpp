#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <limits>

using namespace std;

int dijkstra(const vector<unordered_map<int, int> >& adj, int source, int dest) {
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

    int n, m, c, k, u, v, p;

    while (cin >> n >> m >> c >> k) {
        if (n == 0) break;

        vector<unordered_map<int, int> > adj(n);

        for (int i = 0; i < m; i++) {
            cin >> u >> v >> p;

            if (u >= c || (u != c - 1 && v == u + 1)) {
                adj[u][v] = p;
            }

            if (v >= c || (v != c-1 && u == v + 1)) {
                adj[v][u] = p;
            }
        }

        cout << dijkstra(adj, k, c-1) << endl;
    }


    return 0;
}