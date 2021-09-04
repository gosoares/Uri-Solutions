#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Rena{
	string nome;
	int peso;
	int idade;
	float altura;
	
	void set(string nome, int peso, int idade, float altura){
		this->nome = nome;
		this->peso = peso;
		this->idade = idade;
		this->altura = altura;
	}
	
};

bool sortRenas(Rena r1, Rena r2){
	if(r1.peso != r2.peso){
		return r1.peso > r2.peso;
	}else if(r1.idade != r2.idade){
		return r1.idade < r2.idade;
	}else if(r1.altura != r1.altura){
		return r1.altura < r2.altura;
	}else{
		return r1.nome < r2.nome;
	}
}

int main() {
	
	string nome;
	int t, n, m, peso, idade;
	float altura;
	
	cin >> t;
	
	for(int caso = 1; caso <= t; caso++){
		
		cin >> n >> m;
		
		vector<Rena> renas(n);
		
		for(int i = 0; i < n; i++){
			cin >> nome >> peso >> idade >> altura;
			
			renas[i].set(nome, peso, idade, altura);
		}
		
		sort(renas.begin(), renas.end(), sortRenas);
		
		cout << "CENARIO {" << caso << "}" << endl;
		
		for(int i = 0; i < m; i++){
			cout << i+1 << " - " << renas[i].nome << endl;
		}
		
	}
	
	return 0;
}