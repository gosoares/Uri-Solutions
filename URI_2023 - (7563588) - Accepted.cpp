#include <iostream>

using namespace std;

string lowCase(string s){
	for(auto &c : s){
		if(c >= 'A' && c <= 'Z')
			c += 'a' - 'A';
	}
	return s;
}

int main() {
	
	string nome, nomeLow, ultimo, ultimoLow;
	
	getline(cin, ultimo);
	ultimoLow = lowCase(ultimo);
	
	while(getline(cin, nome)){
		nomeLow = lowCase(nome);
		
		if(nomeLow > ultimoLow){
			ultimo = nome;
			ultimoLow = nomeLow;
		}
		
	}
	
	cout << ultimo << endl;
	
	return 0;
}