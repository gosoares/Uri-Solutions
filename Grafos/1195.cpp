#include <iostream>
#include <sstream>

using namespace std;

struct Node{
    int value;
    struct Node *left;
    struct Node *right;

    Node(int value){
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }

};

struct BST{
    struct Node *root;

    ostringstream ss;

    BST(){
        this->root = NULL;
    }

    void push(int value){

        if(this->root == NULL){
            this->root = new Node(value);
        }else{
            pushAux(root, value);
        }
    }

    void pushAux(Node *parent, int value);

    string preOrder(){
        ss.str("");
        ss.clear();
        preOrderAux(root);
        string saida = ss.str();
        return saida.substr(0, saida.size() - 1);
    }
    string inOrder(){
        ss.str("");
        ss.clear();
        inOrderAux(root);
        string saida = ss.str();
        return saida.substr(0, saida.size() - 1);
    }
    string postOrder(){
        ss.str("");
        ss.clear();
        postOrderAux(root);
        string saida = ss.str();
        return saida.substr(0, saida.size() - 1);
    }

    void preOrderAux(Node *n);
    void inOrderAux(Node *n);
    void postOrderAux(Node *n);

    void clear(){
        clearNode(root);
        root = NULL;
    }

    void clearNode(Node *n);

};

void BST::pushAux(Node *parent, int value){

    if(value < parent->value){
        if(parent->left == NULL){
            parent->left = new Node(value);
        }else{
            pushAux(parent->left, value);
        }
    }else{
        if(parent->right == NULL){
            parent->right = new Node(value);
        }else{
            pushAux(parent->right, value);
        }
    }

}

void BST::preOrderAux(Node *n){
    if(n == NULL)
        return;

    ss << n->value << " ";
    preOrderAux(n->left);
    preOrderAux(n->right);
}

void BST::inOrderAux(Node *n){
    if(n == NULL)
        return;

    inOrderAux(n->left);
    ss << n->value << " ";
    inOrderAux(n->right);
}

void BST::postOrderAux(Node *n){
    if(n == NULL)
        return;

    postOrderAux(n->left);
    postOrderAux(n->right);
    ss << n->value << " ";
}

void BST::clearNode(Node *n){
    if(n == NULL)
        return;

    clearNode(n->left);
    clearNode(n->right);
    delete n;
}

int main(){

    int c, n, value;
    cin >> c;

    BST bst;

    for(int caso = 1; caso <= c; caso++){

        cin >> n;

        bst.clear();
        while(n--){
            cin >> value;
            bst.push(value);
        }

        cout << "Case " << caso << ":" << endl;
        cout << "Pre.: " << bst.preOrder() << endl;
        cout << "In..: " << bst.inOrder() << endl;
        cout << "Post: " << bst.postOrder() << endl;
        cout << endl;

    }

    return 0;
}
