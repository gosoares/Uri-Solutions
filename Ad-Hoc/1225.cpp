#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	int n, soma = 0, compassos;
	double media;
	
	while(cin >> n){
		
		int notas[n];
		
		soma = 0;
		for(auto &nota : notas){
			cin >> nota;
			soma += nota;
		}
		
		media = (double) soma / n;
		
		soma = media;
		
		if(media != soma){
			cout << -1 << endl;
			continue;
		}
		
		compassos = 0;
		
		for(auto &nota : notas){
			compassos += abs(nota - soma);
		}
		
		cout << compassos / 2 + 1 << endl;
		
	}
	
	return 0;
}