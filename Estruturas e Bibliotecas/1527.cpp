#include <iostream>
#include <vector>
#include <numeric>
 
using namespace std;
 
struct DisjointSet {
    vector<int> setLeader;
    vector<int> size;

    DisjointSet(int n): setLeader(n), size(n, 1) {
        iota(setLeader.begin(), setLeader.end(), 0);
    }

    int find(int x) {
        if (setLeader[x] != x)
            setLeader[x] = find(x);

        return setLeader[x];
    }

    int setUnion(int x, int y) {
        int a = find(x);
        int b = find(y);

        if (a != b) {
            if (size[a] < size[b])
                swap(a, b);

            setLeader[b] = a;
            size[a] += size[b];
        }

        return a;
    }
};

int main() {
 
    int n, m, q, a, b;

    while (cin >> n >> m && n > 0) {
        vector<int> guilds(n);
        iota(guilds.begin(), guilds.end(), 0);

        DisjointSet ds(n);

        vector<int> points(n);

        for (int& x : points)
            cin >> x;

        int wins = 0;

        while (m--) {
            cin >> q >> a >> b;
            a--, b--;

            if (q == 1) { // union
                int leader = ds.setUnion(a, b);
                points[leader] = points[a] + points[b];
            } else {
                int al = ds.find(a);
                int bl = ds.find(b);
                int rl = ds.find(0);

                if (bl == rl)
                    swap(bl, al);

                if (rl == al && points[al] > points[bl])
                    wins++;
            }
        }

        cout << wins << endl;
    }
 
    return 0;
}