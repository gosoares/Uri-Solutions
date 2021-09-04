#include <iostream>
#include <stack>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {

    string line;
    istringstream ss;
    char c;
    stack<long long int> pilha;
    int a, b;

    while(getline(cin, line)){
        while(!pilha.empty()){
            pilha.pop();
        }

        reverse(line.begin(), line.end());

        ss.clear();
        ss.str(line);
        line = "S"; // sucesso

        while(ss >> c){
            if(c >= '0' && c <= '9'){
                pilha.push(c - '0');
            }else{
                if(pilha.size() < 2){
                    line = "I"; // invalido
                    break;
                }

                a = pilha.top();
                pilha.pop();
                b = pilha.top();
                pilha.pop();

                if(c == '+'){
                    pilha.push(b + a);
                }else if(c == '-'){
                    pilha.push(b - a);
                }else if(c == '*'){
                    pilha.push(b * a);
                }else{ // if(c == '/')
                    if(a == 0){
                        line = "D"; // divisao por zero
                        a = 1;
                    }
                    pilha.push(b / a);
                }

            }
        }

        if(pilha.size() != 1)
            line = "I";

        if(line == "D"){
            cout << "Division by zero." << endl;
        }else if(line == "I"){
            cout << "Invalid expression." << endl;
        }else{
            cout << "The answer is " << pilha.top() << "." << endl;
        }

    }

    return 0;
}
