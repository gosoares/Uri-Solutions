#include <bits/stdc++.h>

using namespace std;

struct Node{

    string nome;
    int value;
    Node *next;
    Node *prev;

    Node(string nome, int value) : nome(nome), value(value){
        next = NULL;
        prev = NULL;
    };


};

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n, value, passos, passosAnterior;
    string nome;
    Node *root, *actual;

    while(cin >> n && n > 0){

        cin >> nome >> value;
        root = new Node(nome, value);
        actual = root;

        for(int i = 1; i < n; i++){
            cin >> nome >> value;
            actual->next = new Node(nome, value);
            actual->next->prev = actual;
            actual = actual->next;
        }

        actual->next = root;
        root->prev = actual;
        actual = root;

        passosAnterior = actual->value;
        while(n > 1){
            passos = passosAnterior % n;

            if(passosAnterior%2 == 0){
                while(passos--){
                    actual = actual->prev;
                }
            }else{
                while(passos--){
                    actual = actual->next;
                }
            }

            passosAnterior = actual->value;
            actual->prev->next = actual->next;
            actual->next->prev = actual->prev;

            if(passosAnterior%2==0){
                root = actual->next;
            }else{
                root = actual->prev;
            }

            delete actual;

            actual = root;

            n--;
        }

        cout << "Vencedor(a): " << actual->nome << endl;

        delete actual;

    }

	return 0;
}
