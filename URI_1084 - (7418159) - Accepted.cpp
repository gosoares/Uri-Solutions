#include <iostream>

using namespace std;

class Pilha{
private:
    char pilha[100000];
    int itop;
public:
    Pilha();

    void push(char c);
    void pop();
    char top();
    int size();
    void clear();

    void print();

};

Pilha::Pilha(){
    itop = -1;
}

void Pilha::push(char c){
    itop++;
    pilha[itop] = c;
}

void Pilha::pop(){
    if(itop >= 0)
        itop--;
}

char Pilha::top(){
    return pilha[itop];
}

int Pilha::size(){
    return itop + 1;
}

void Pilha::clear(){
    itop = -1;
}

void Pilha::print(){
    for(int i = 0; i <= itop; i++){
        cout << pilha[i];
    }
    cout << endl;
}

int main() {

    int n, d, restante;
    string numero;
    Pilha p;

    while((cin >> n >> d) && n > 0){
        cin.ignore();
        getline(cin, numero);

        p.clear();

        for(int i = 0; i < numero.size(); i++){
            while(d > 0 && p.size() > 0 && p.top() < numero[i]){
                p.pop();
                d--;
            }
            p.push(numero[i]);
        }

        while(d--)
            p.pop();


        p.print();
    }



    return 0;
}
