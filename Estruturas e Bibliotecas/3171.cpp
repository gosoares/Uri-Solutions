#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

bool searchN(const vector<unordered_set<int>>& adj, vector<bool>& visited,
             int x) {
    if (x == adj.size() - 1) return true;

    visited[x] = true;

    for (int a : adj[x]) {
        if (!visited[a] && searchN(adj, visited, a)) return true;
    }

    return false;
}

int main() {
    int n, l, x, y;

    cin >> n >> l;

    vector<unordered_set<int>> adj(n + 1);

    while (l--) {
        cin >> x >> y;

        if (x > y) swap(x, y);

        adj[x].insert(y);
        adj[y].insert(x);
    }

    vector<bool> visited(n + 1, false);
    cout << (searchN(adj, visited, 1) ? "COMPLETO" : "INCOMPLETO") << '\n';

    return 0;
}