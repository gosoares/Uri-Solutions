#include <iostream>
#include <set>

using namespace std;

void permutacoesRecursiva(set<string> &permutacoes, string &palavra, int k){
	
	if(k == palavra.size()){
		permutacoes.insert(palavra);
		return;
	}
	
	int aux;
	for(int i = k; i < palavra.size(); i++){
		aux = palavra[k];
		palavra[k] = palavra[i];
		palavra[i] = aux;
		
		permutacoesRecursiva(permutacoes, palavra, k+1);
		
		palavra[i] = palavra[k];
		palavra[k] = aux;
	}
	
}

int main() {
	
	string palavra;
	int n;
	char aux;
	
	cin >> n;
	
	while(n--){
		
		set<string> permutacoes;
		
		cin >> palavra;
		
		permutacoesRecursiva(permutacoes, palavra, 0);
		
		for(set<string>::iterator it = permutacoes.begin(); it != permutacoes.end(); it++){
			cout << *it << endl;
		}
		cout << endl;
		
	}
	
	return 0;
}