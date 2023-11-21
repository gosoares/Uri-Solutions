#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct Node {
    int n;
    Node *left;
    Node *right;

    Node(int n): n(n) {}
};

Node *circularList(int n) {
    Node *one = new Node(1);
    Node *nd = one;

    for(int i = 2; i <= n; i++) {
        nd->right = new Node(i);
        nd->right->left = nd;
        nd = nd->right;
    }

    nd->right = one;
    one->left = nd;

    return one;
}

void deleteNode(Node *n) {
    n->right->left = n->left;
    n->left->right = n->right;
    delete n;
}

int main() {

    int n, k, m;

    while (cin >> n >> k >> m) {
        if (n == 0) break;
        
        Node* toLeft = circularList(n);
        Node* toRight = toLeft->left;

        bool finished = false;

        while (!finished) {
            for (int i = 0; i < k; i++)
                toRight = toRight->right;

            for (int i = 0; i < m; i++)
                toLeft = toLeft->left;

            if (toLeft == toRight) {
                printf("%3d", toLeft->n);

                if(toLeft->left == toLeft)
                    finished = true;

                Node *d = toLeft;
                toRight = toRight->left;
                toLeft = toLeft->right;
                deleteNode(d);
            } else {
                printf("%3d%3d", toRight->n, toLeft->n);
                Node *d = toRight;

                toRight = toRight->left;
                if (toRight == toLeft) {
                    toRight = toRight->left;
                }
                deleteNode(d);

                if(toLeft->left == toLeft)
                    finished = true;

                toLeft = toLeft->right;
                deleteNode(toLeft->left);
            }

            if (!finished)
                cout << ",";
        }
        cout << endl;
    }

    return 0;
}