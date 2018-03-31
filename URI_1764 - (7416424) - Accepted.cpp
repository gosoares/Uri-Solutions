#include<bits/stdc++.h>
using namespace std;

typedef  pair<int, int> iPair;

struct Graph {
    int V;
    vector< pair<int, iPair> > edges;

    Graph(int V) {
        this->V = V;
    }

    void addEdge(int u, int v, int w) {
        edges.push_back({w, {u, v}});
    }

    unsigned long int kruskalMST();
};

struct DisjointSets {
    int *parent, *rnk;
    int n;

    DisjointSets(int n) {

        this->n = n;
        parent = new int[n+1];
        rnk = new int[n+1];

        for (int i = 0; i <= n; i++) {
            rnk[i] = 0;

            parent[i] = i;
        }
    }


    int find(int u) {
        if (u != parent[u])
            parent[u] = find(parent[u]);
        return parent[u];
    }

    void merge(int x, int y) {
        x = find(x), y = find(y);

        if (rnk[x] > rnk[y])
            parent[y] = x;
        else
            parent[x] = y;

        if (rnk[x] == rnk[y])
            rnk[y]++;
    }
};

unsigned long int Graph::kruskalMST() {
    unsigned long int mst_wt = 0;

    sort(edges.begin(), edges.end());

    // Create disjoint sets
    DisjointSets ds(V);

    // Iterate through all sorted edges
    vector< pair<int, iPair> >::iterator it;
    for (it=edges.begin(); it!=edges.end(); it++) {
        int u = it->second.first;
        int v = it->second.second;

        int set_u = ds.find(u);
        int set_v = ds.find(v);

        // Check if the selected edge is creating
        // a cycle or not (Cycle is created if u
        // and v belong to same set)
        if (set_u != set_v) {
            // Current edge will be in the MST
            // so print it

            // Update MST weight
            mst_wt += it->first;

            // Merge two sets
            ds.merge(set_u, set_v);
        }
    }

    return mst_wt;
}

int main() {

    int m, n, x, y, z;

    while((cin >> m >> n) && (m > 0)){

        Graph g(m);

        while(n--){
            cin >> x >> y >> z;
            g.addEdge(x, y, z);
        }

        cout << g.kruskalMST() << endl;

    }

    return 0;
}
