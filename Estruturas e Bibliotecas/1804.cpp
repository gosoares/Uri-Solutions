#include <iostream>
#include <vector>

using namespace std;

class SegTree {
   public:
    explicit SegTree(const vector<unsigned long long>& numbers)
        : tree(4 * numbers.size()), N((int)numbers.size()) {
        build(numbers, 0, 0, N - 1);
    }

    void update(int position, unsigned long long value) {
        update(0, 0, N - 1, position, value);
    }

    unsigned long long query(int start, int end) {
        int q = query(0, 0, N - 1, start, end);
        return q;
    }

   private:
    vector<unsigned long long> tree;
    const int N;

    void build(const vector<unsigned long long>& numbers, int node, int start,
               int end) {
        if (start == end) {
            tree[node] = numbers[start];
            return;
        }

        int mid = (start + end) / 2;

        build(numbers, node * 2 + 1, start, mid);
        build(numbers, node * 2 + 2, mid + 1, end);

        tree[node] = tree[node * 2 + 1] + tree[node * 2 + 2];
    }

    void update(int node, int start, int end, int pos, unsigned long long val) {
        if (start == end) {
            tree[node] = val;
        } else {
            int mid = (start + end) / 2;
            if (start <= pos && pos <= mid)
                update(node * 2 + 1, start, mid, pos, val);
            else
                update(node * 2 + 2, mid + 1, end, pos, val);

            tree[node] = tree[node * 2 + 1] + tree[node * 2 + 2];
        }
    }

    unsigned long long query(int node, int start, int end, int qstart,
                             int qend) {
        if (start >= qstart && end <= qend) return tree[node];
        if (end < qstart || start > qend) return 0;

        int mid = (start + end) / 2;
        return query(node * 2 + 1, start, mid, qstart, qend) +
               query(node * 2 + 2, mid + 1, end, qstart, qend);
    }
};

int main() {
    int n;
    cin >> n;

    vector<unsigned long long> buggies(n);
    for (auto& x : buggies) cin >> x;

    SegTree tree(buggies);

    char c;
    int i;

    while (cin >> c >> i) {
        i--;
        if (c == 'a') {
            tree.update(i, 0);
        } else {
            cout << tree.query(0, i) << endl;
        }
    }

    return 0;
}