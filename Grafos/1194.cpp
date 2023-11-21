#include <iostream>
 
using namespace std;
 
struct Node {
    char c;
    Node* parent;
    Node* left = nullptr;
    Node* right = nullptr;

    Node(char c, Node* parent = nullptr) : c(c), parent(parent) {}
};

void printSuffix(Node* n) {
    if (n == nullptr) return;
    printSuffix(n->left);
    printSuffix(n->right);
    cout << n->c;
}

int main() {
 
    int c, n;
    cin >> c;

    string prefix, infix;

    while (c--) {
        cin >> n >> prefix >> infix;

        Node* root = new Node(prefix[0]);
        Node* tree = root;
        bool toLeft = true;

        int i = 1, j = 0;
        while (i < prefix.size() && j < infix.size()) {
            if (toLeft) { // create elements to the left until find element in infix
                while (prefix[i - 1] != infix[j]) {
                    tree->left = new Node(prefix[i], tree);
                    tree = tree->left;
                    i++;
                }
                toLeft = false;
            } else {
                j++;

                // check if exists a parent with c = infix[j]
                while (true) {
                    Node* search = tree->parent;
                    while (search != nullptr && search->c != infix[j]) {
                        search = search->parent;
                    }
                    if (search != nullptr) {
                        j++;
                        tree = search;
                    } else {
                        break;
                    }
                }
                tree->right = new Node(prefix[i], tree);
                tree = tree->right;
                i++;
                toLeft = true;
            }
        }

        printSuffix(root);
        cout << endl;
    }
 
    return 0;
}