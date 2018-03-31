#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

int main() {

	string entrada;
	int diamantes, n;

	cin >> n;
	cin.ignore();

	for(int j = 0; j < n; j++){

        getline(cin, entrada);

		diamantes = 0;

		stack<char> pilha;

		for(unsigned int i = 0; i < entrada.length(); i++){
			if(entrada[i] == '<')
				pilha.push('<');
			else if(entrada[i] == '>'){
				if(!pilha.empty()){
					pilha.pop();
					diamantes++;
				}
			}
		}

        cout << diamantes << endl;

	}


}
