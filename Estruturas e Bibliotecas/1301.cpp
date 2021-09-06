#include <iostream>
#include <vector>

using namespace std;

class SegTree {
public:
    explicit SegTree(const vector<int>& numbers) : tree(4 * numbers.size()), N((int) numbers.size()) {
        build(numbers, 0, 0, N - 1);
    }

    void update(int position, int value) {
        update(0, 0, N - 1, position, value);
    }

    int query(int start, int end) {
        int q = query(0, 0, N - 1, start, end);
        return q;
    }

private:
    vector<int> tree;
    const int N;

    void build(const vector<int>& numbers, int node, int start, int end) {
        if (start == end) {
            tree[node] = numbers[start];
            return;
        }

        int mid = (start + end) / 2;

        build(numbers, node * 2 + 1, start, mid);
        build(numbers, node * 2 + 2, mid + 1, end);

        tree[node] = tree[node * 2 + 1] * tree[node * 2 + 2];
    }

    void update(int node, int start, int end, int pos, int val) {
        if (start == end) {
            tree[node] = val;
        } else {
            int mid = (start + end) / 2;
            if (start <= pos && pos <= mid) update(node * 2 + 1, start, mid, pos, val);
            else update(node * 2 + 2, mid + 1, end, pos, val);

            tree[node] = tree[node * 2 + 1] * tree[node * 2 + 2];
        }
    }

    int query(int node, int start, int end, int qstart, int qend) {
        if (start >= qstart && end <= qend) return tree[node];
        if (end < qstart || start > qend) return 1;

        int mid = (start + end) / 2;
        return query(node * 2 + 1, start, mid, qstart, qend) * query(node * 2 + 2, mid + 1, end, qstart, qend);
    }
};

int zeroOne(int x) {
    if (x > 0) return 1;
    if (x < 0) return -1;
    return 0;
}

int main() {

    int n, k, i, v;
    char command;

    while (cin >> n >> k) {
        vector<int> numbers(n);

        for (int& x : numbers) {
            cin >> x;

            x = zeroOne(x);
        }

        SegTree tree(numbers);

        while (k--) {
            cin >> command >> i >> v;

            if (command == 'C') {
                tree.update(i - 1, zeroOne(v));
            } else { // if command == 'P'
                int result = tree.query(i-1, v-1);

                if (result > 0) cout << '+';
                else if (result < 0) cout << '-';
                else cout << '0';
            }
        }

        cout << endl;

    }


    return 0;
}