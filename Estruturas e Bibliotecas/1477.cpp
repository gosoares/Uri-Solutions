#include <iostream>
#include <vector>

using namespace std;

typedef unsigned long long ull;

struct Strategy {
    ull man;
    ull elephant;
    ull mice;

    Strategy(ull man, ull elephant, ull mice)
        : man(man), elephant(elephant), mice(mice) {}

    void change() {
        int aux = mice;
        mice = elephant;
        elephant = man;
        man = aux;
    }

    Strategy operator+(const Strategy& o) const {
        return Strategy(man + o.man, elephant + o.elephant, mice + o.mice);
    }

    Strategy operator+=(const Strategy& o) {
        man += o.man;
        elephant += o.elephant;
        mice += o.mice;
    }
};

class SegTree {
   public:
    explicit SegTree(int n)
        : n(n), tree(n * 4, Strategy(1, 0, 0)), lazy(n * 4, 0) {}

    void update(int s, int e) { update(0, 0, n - 1, s, e); }

    Strategy query(int start, int end) {
        return query(0, 0, n - 1, start, end);
    }

   private:
    const int n;
    vector<Strategy> tree;
    vector<ull> lazy;  // how many strategy change is pending

    void update(int node, int start, int end, int s, int e) {
        if (lazy[node] != 0) {
            for (int i = 0; i < (lazy[node] % 3); i++) tree[node].change();
            if (start != end) {  // mark children to update
                lazy[node * 2 + 1] += lazy[node];
                lazy[node * 2 + 2] += lazy[node];
            }
            lazy[node] = 0;
        }

        if (start > e || end < s)  // fully outside query range
            return;

        if (start >= s && end <= e) {  // fully in update range
            tree[node].change();       // update for all children
            if (start != end) {
                lazy[node * 2 + 1]++;
                lazy[node * 2 + 2]++;
            }

            return;
        }

        int mid = (start + end) / 2;
        update(node * 2 + 1, start, mid, s, e);
        update(node * 2 + 2, mid + 1, end, s, e);

        tree[node] = tree[node * 2 + 1] + tree[node * 2 + 2];
    }

    Strategy query(int node, int start, int end, int qstart, int qend) {
        if (start > qend || end < qstart)  // fully outside query range
            return Strategy(0, 0, 0);

        // lazy update
        if (lazy[node] != 0) {
            for (int i = 0; i < (lazy[node] % 3); i++) {
                tree[node].change();
            }

            if (start != end) {
                lazy[node * 2 + 1] += lazy[node];
                lazy[node * 2 + 2] += lazy[node];
            }

            lazy[node] = 0;
        }

        if (start >= qstart && end <= qend)  // fully in query range
            return tree[node];

        int mid = (start + end) / 2;
        return query(node * 2 + 1, start, mid, qstart, qend) +
               query(node * 2 + 2, mid + 1, end, qstart, qend);
    }
};

int main() {
    int n, m, a, b;
    char op;

    while (cin >> n >> m) {
        SegTree tree(n);

        while (m--) {
            cin >> op >> a >> b;
            a--, b--;

            if (op == 'M') {
                tree.update(a, b);
            } else {
                auto s = tree.query(a, b);
                cout << s.man << " " << s.elephant << " " << s.mice << '\n';
            }
        }

        cout << '\n';
    }
}