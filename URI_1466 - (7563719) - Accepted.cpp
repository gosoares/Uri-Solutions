#include <iostream>
#include <queue>

using namespace std;


struct Node{
	int value;
	struct Node *left;
	struct Node *right;
	
	Node(int value){
		this->value = value;
		left = NULL;
		right = NULL;
	}
};

struct BST{
	
	Node *root;
	
	BST(){
		root = NULL;
	}
	
	~BST(){
		clear(root);
	}
	
	void insert(int value);
	Node *insertAux(Node *parent, int value);
	void printDFS();
	void clear(Node *);
};

void BST::insert(int value){
	root = insertAux(root, value);
}

Node* BST::insertAux(Node *node, int value){
	if(node == NULL){
		return new Node(value);
	}
	
	if(value < node->value){
		node->left = insertAux(node->left, value);
	}else{
		node->right = insertAux(node->right, value);
	}
	
	return node;
}

void BST::printDFS(){
	queue<Node *> fila;
	Node *n;
	
	cout << root->value;
	
	if(root->left != NULL){
		fila.push(root->left);
	} 
	if(root->right != NULL){
		fila.push(root->right);
	} 
	
	while(!fila.empty()){
		n = fila.front();
		fila.pop();
		
		cout << " " << n->value;
		
		if(n->left != NULL){
			fila.push(n->left);
		} 
		if(n->right != NULL){
			fila.push(n->right);
		}
	}
	
	cout << endl;
	
}

void BST::clear(Node *node){
	if(node != NULL){
		clear(node->right);
		clear(node->left);
		delete node;
	}
}

int main() {
	
	int c, n, x;
	
	cin >> c;
	
	for(int caso = 1; caso <= c; caso++){
		
		
		BST bst;
		
		cin >> n;
		
		while(n--){
			cin >> x;
			bst.insert(x);
		}
		
		cout << "Case " << caso << ":" << endl;
		bst.printDFS();
		cout << endl;
		
	}
	
	return 0;
}