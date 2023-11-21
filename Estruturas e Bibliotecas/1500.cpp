#include <iostream>
#include <vector>

using namespace std;

typedef unsigned long long ull;

class SegTree {
public:

    explicit SegTree(int n) : n(n), tree(n * 4, 0), lazy(n * 4, 0) {
        // all elements starts with 0, so no build needed
    }

    void update(int s, int e, ull v) {
        update(0, 0, n - 1, s, e, v);
    }

    ull query(int start, int end) {
        return query(0, 0, n-1, start, end);
    }

private:
    const int n;
    vector<ull> tree;
    vector<ull> lazy;

    void update(int node, int start, int end, int s, int e, ull v) {
        if (lazy[node] != 0) {
            tree[node] += (end - start + 1) * lazy[node]; // sum of value for all interval
            if (start != end) { // mark children to update
                lazy[node * 2 + 1] += lazy[node];
                lazy[node * 2 + 2] += lazy[node];
            }
            lazy[node] = 0;
        }

        if (start > e || end < s) // fully outside query range
            return;

        if (start >= s && end <= e) { // fully in update range
            tree[node] += (end - start + 1) * v; // update for all children
            if (start != end) {
                lazy[node * 2 + 1] += v;
                lazy[node * 2 + 2] += v;
            }

            return;
        }

        int mid = (start + end) / 2;
        update(node * 2 + 1, start, mid, s, e, v);
        update(node * 2 + 2, mid + 1, end, s, e, v);

        tree[node] = tree[node * 2 + 1] + tree[node * 2 + 2];
    }

    ull query(int node, int start, int end, int qstart, int qend) {
        if (start > qend || end < qstart) // fully outside query range
            return 0;

        // lazy update
        if (lazy[node] != 0) {
            tree[node] += (end - start + 1) * lazy[node];

            if (start != end) {
                lazy[node * 2 + 1] += lazy[node];
                lazy[node * 2 + 2] += lazy[node];
            }

            lazy[node] = 0;
        }

        if (start >= qstart && end <= qend) // fully in query range
            return tree[node];

        int mid = (start + end) / 2;
        return query(node * 2 + 1, start, mid, qstart, qend) + query(node * 2 + 2, mid + 1, end, qstart, qend);
    }
};

int main() {

    int t, n, c, op, p, q;
    ull v;

    cin >> t;

    while (t--) {
        cin >> n >> c;

        SegTree tree(n);

        while (c--) {
            cin >> op >> p >> q;

            if (op == 0) {
                cin >> v;
                tree.update(p-1, q-1, v);
            } else {
                cout << tree.query(p-1, q-1) << endl;
            }
        }

    }

    return 0;
}