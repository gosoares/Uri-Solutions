#include <iostream>
#include <queue>
#include <unordered_map>
#include <unordered_set>

#define endl '\n'

using namespace std;

int bfs(unordered_map<string, unordered_set<string> > adj, string o, string d) {
    unordered_map<string, bool> visited;

    queue<pair<string, int> > q;
    q.emplace(o, 1);
    visited[o] = true;

    pair<string, int> current;
    while (!q.empty()) {
        current = q.front();
        q.pop();
        visited[current.first] = true;

        for (const string& a : adj[current.first]) {
            if (a == d)
                return current.second + 1;
            else if (!visited[a]) {
                q.emplace(a, current.second + 1);
            }
        }
    }

    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<string, unordered_set<string> > adj;
    string x, y;

    int points, connections;
    cin >> points >> connections;

    while (connections--) {
        cin >> x >> y;

        adj[x].insert(y);
        adj[y].insert(x);
    }

    cout << bfs(adj, "Entrada", "*") + bfs(adj, "*", "Saida") - 2 << endl;

    return 0;
}