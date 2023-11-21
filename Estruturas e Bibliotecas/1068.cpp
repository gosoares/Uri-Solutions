#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

int main() {

	string entrada;
	bool correto;

	while(getline(cin, entrada)){
		correto = true;

		stack<char> pilha;

		for(unsigned int i = 0; i < entrada.length(); i++){
			if(entrada[i] == '(')
				pilha.push('(');
			else if(entrada[i] == ')'){
				if(!pilha.empty())
					pilha.pop();
				else{
					correto = false;
					break;
				}
			}
		}

		if(correto && pilha.empty())
			cout << "correct" << endl;
		else
			cout << "incorrect" << endl;

	}


}
