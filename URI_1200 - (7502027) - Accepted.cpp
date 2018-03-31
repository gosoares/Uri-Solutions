#include <iostream>
#include <set>

using namespace std;

struct Node{
	char value;
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
	
	void insert(char value){
		root = insertAux(root, value);
	}
	
	Node *insertAux(Node *parent, char value){
		if(parent == NULL)
			return new Node(value);
			
		if(value < parent->value){
			parent->left = insertAux(parent->left, value);
		}else{
			parent->right = insertAux(parent->right, value);
		}
		
		return parent;
	}
	
	bool search(char value){
		return searchAux(root, value);
	}
	
	bool searchAux(Node *node, char value){
		if(node == NULL)
			return false;
			
		if(node->value == value)
			return true;
			
		if(value < node->value)
			return searchAux(node->left, value);
		else
			return searchAux(node->right, value);
	}
	
	bool printSpace;
	
	void infix(){
		printSpace = false;
		infixAux(root);
		cout << endl;
	}
	
	void infixAux(Node *node){
		if(node != NULL){
			infixAux(node->left);
			if(printSpace)
				cout << ' ';
			else
				printSpace = true;
			cout << node->value;
			infixAux(node->right);
		}
	}
	
	void prefix(){
		printSpace = false;
		prefixAux(root);
		cout << endl;
	}
	
	void prefixAux(Node *node){
		if(node != NULL){
			if(printSpace)
				cout << ' ';
			else
				printSpace = true;
			cout << node->value;
			prefixAux(node->left);
			prefixAux(node->right);
		}
	}
	
	void posfix(){
		printSpace = false;
		posfixAux(root);
		cout << endl;
	}
	
	void posfixAux(Node *node){
		if(node != NULL){
			posfixAux(node->left);
			posfixAux(node->right);
			if(printSpace)
				cout << ' ';
			else
				printSpace = true;
			cout << node->value;
		}
	}
	
};

int main() {
	
	string comando;
	char value;
	
	BST bst;
	
	while(cin >> comando){
		if(comando == "I"){
			cin >> value;
			bst.insert(value);
		}else if(comando == "P"){
			cin >> value;
			cout << value << (!bst.search(value) ? " nao" : "") << " existe" << endl;
		}else if(comando == "INFIXA"){
			bst.infix();
		}else if(comando == "PREFIXA"){
			bst.prefix();
		}else{ // comando == "POSFIXA"
			bst.posfix();
		}
	}
	
	return 0;
}