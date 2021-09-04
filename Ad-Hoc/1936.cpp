#include <iostream>

using namespace std;

int main() {
	
	int fat[9];
	fat[0] = 1;
	
	for(int i = 1; i < 9; i++){
		fat[i] = i * fat[i - 1];
	}
	
	int n;
	
	cin >> n;
	
	int soma = 0, qtd = 0, i = 8;
	
	while(true){
		if(soma + fat[i] == n){
			qtd++;
			break;
		}else if(soma + fat[i] < n){
			soma += fat[i];
			qtd++;
		}else{
			i--;
		}
	}
	
	cout << qtd << endl;
	
	
	return 0;
}