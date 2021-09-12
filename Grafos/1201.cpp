#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>

#define endl '\n'

using namespace std;

class BinarySearchTree {
    struct Node {
        int value;

        explicit Node(int value)
            : value(value), left(nullptr), right(nullptr) {}

        Node *left;
        Node *right;
    };

    Node *root = nullptr;
    vector<int> values;

    void printValues() {
        printf("%d", values[0]);
        for (int i = 1; i < values.size(); i++) {
            printf(" %d", values[i]);
        }
        printf("\n");
        values.clear();
    }

    Node *insert(Node *node, int value) {
        if (node == nullptr) return new Node(value);

        if (value > node->value)
            node->right = insert(node->right, value);
        else
            node->left = insert(node->left, value);
        return node;
    }

    void inOrder(Node *node) {
        if (node == nullptr) return;

        inOrder(node->left);
        values.push_back(node->value);
        inOrder(node->right);
    }

    void preOrder(Node *node) {
        if (node == nullptr) return;

        values.push_back(node->value);
        preOrder(node->left);
        preOrder(node->right);
    }

    void postOrder(Node *node) {
        if (node == nullptr) return;

        postOrder(node->left);
        postOrder(node->right);
        values.push_back(node->value);
    }

    bool search(Node *node, int value) {
        if (node == nullptr) return false;
        if (node->value == value) return true;

        if (value < node->value)
            return search(node->left, value);
        else
            return search(node->right, value);
    }

    Node *remove(Node *node, int value) {
        if (node == nullptr) return nullptr;

        if (value < node->value) {
            node->left = remove(node->left, value);
            return node;
        } else if (value > node->value) {
            node->right = remove(node->right, value);
            return node;
        }

        // node->value == value
        if (node->left == nullptr && node->right == nullptr) {
            // no child
            delete node;
            return nullptr;
        } else if (node->left == nullptr) {
            Node *child = node->right;
            delete node;
            return child;
        } else if (node->right == nullptr) {
            Node *child = node->left;
            delete node;
            return child;
        }

        // node has both children
        Node *n = node->left;
        if (n->right == nullptr) {
            node->value = n->value;
            node->left = n->left;
            delete n;
            return node;
        } else {
            while (n->right->right != nullptr) n = n->right;
            Node *r = n->right;  // to remove
            node->value = r->value;
            n->right = r->left;
            delete r;
            return node;
        }
    }

   public:
    void insert(int value) { root = insert(root, value); }

    bool search(int value) { return search(root, value); }

    void remove(int value) { root = remove(root, value); }

    void inOrder() {
        inOrder(root);
        printValues();
    }

    void preOrder() {
        preOrder(root);
        printValues();
    }

    void postOrder() {
        postOrder(root);
        printValues();
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char command[10];
    int value;

    BinarySearchTree tree;

    while (scanf("%s", command) != EOF) {
        if (strcmp(command, "I") == 0) {
            scanf("%d", &value);
            tree.insert(value);
        } else if (strcmp(command, "INFIXA") == 0) {
            tree.inOrder();
        } else if (strcmp(command, "PREFIXA") == 0) {
            tree.preOrder();
        } else if (strcmp(command, "POSFIXA") == 0) {
            tree.postOrder();
        } else if (strcmp(command, "P") == 0) {
            scanf("%d", &value);
            if (tree.search(value)) {
                printf("%d existe\n", value);
            } else {
                printf("%d nao existe\n", value);
            }
        } else {  // command == R
            scanf("%d", &value);
            tree.remove(value);
        }
    }

    return 0;
}