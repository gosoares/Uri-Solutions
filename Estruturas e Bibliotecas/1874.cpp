#include <iostream>
#include <vector>
#define endl '\n'

using namespace std;

int h, p, f;

void insert(vector<vector<int> >& stacks, const vector<int>& blocks) {
    int i = 0, j = p - 1;

    // look for first (right to left) stack without element on top
    while (j >= 0 && stacks[0][j] == 1) j--;

    if (j < 0) return;  // stacks already full

    // look for first element missing on that stack
    while (i < h && stacks[i][j] == 0) i++;
    i--;

    int b = 0;
    while (j >= 0 && b < blocks.size()) {
        stacks[i][j] = blocks[b];
        b++;
        i--;

        if (i < 0) {  // top of stack
            while (j >= 0 && stacks[0][j] == 1) j--;
            if (j < 0) return;  // stacks already full
            i = 0;

            // look for first element missing on that stack
            while (i < h && stacks[i][j] == 0) i++;
            i--;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (cin >> h >> p >> f && h > 0) {
        vector<vector<int> > stacks(h, vector<int>(p));

        for (auto& stack : stacks) {
            for (auto& e : stack) {
                cin >> e;
            }
        }

        vector<int> blocks(f);
        for (int& b : blocks) cin >> b;

        insert(stacks, blocks);

        for (int i = 0; i < stacks.size(); i++) {
            cout << stacks[i][0];
            for (int j = 1; j < stacks[i].size(); j++) {
                cout << ' ' << stacks[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}