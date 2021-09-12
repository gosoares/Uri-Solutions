#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>

#define endl '\n'

using namespace std;

int c, p, x, y;

struct Graph {
    const vector<unordered_set<int> >& adjList;
    vector<int> times;
    vector<int> low;
    int bridges, timer;

    Graph(const vector<unordered_set<int> >& adj)
        : adjList(adj), times(c, -1), low(c, -1), bridges(0), timer(1) {}

    int countBridges() {
        bridges = 0;
        timer = 1;
        countBridges(0);
        return bridges;
    }

    void countBridges(int v) {
        times[v] = timer;
        low[v] = timer;
        timer++;

        for (int u : adjList[v]) {
            if (times[u] > 0) {  // visited
                low[v] = min(low[v], times[u]);
            } else {
                countBridges(u);
                low[v] = min(low[v], low[u]);
                if (low[u] >= times[v]) bridges++;
            }
        }
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (cin >> c >> p) {
        vector<unordered_set<int> > adjList(c);

        while (p--) {
            cin >> x >> y;
            adjList[x - 1].insert(y - 1);
            adjList[y - 1].insert(x - 1);
        }

        Graph g(adjList);

        cout << g.countBridges() << endl;
    }

    return 0;
}