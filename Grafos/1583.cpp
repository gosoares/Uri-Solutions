#include <iostream>
#include <vector>
#define endl '\n'

using namespace std;

int n, m;

void contaminate(vector<string>& map, vector<vector<bool> >& visited, int x,
                 int y) {
    if (visited[x][y] || map[x][y] == 'X') return;

    visited[x][y] = true;
    map[x][y] = 'T';

    if (x > 0) contaminate(map, visited, x - 1, y);
    if (x < n - 1) contaminate(map, visited, x + 1, y);
    if (y > 0) contaminate(map, visited, x, y - 1);
    if (y < m - 1) contaminate(map, visited, x, y + 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (cin >> n >> m && n > 0) {
        vector<string> map(n);

        for (string& s : map) cin >> s;

        vector<vector<bool> > visited(n, vector<bool>(m, false));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (map[i][j] == 'T') contaminate(map, visited, i, j);
            }
        }

        for (int i = 0; i < n; i++) {
            cout << map[i] << endl;
        }

        cout << endl;
    }

    return 0;
}