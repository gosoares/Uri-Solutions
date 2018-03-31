#include <iostream>

using namespace std;

int main() {
	
	int n, soma;
	string m;
	
	
	
	while(cin >> n >> m){
		soma = 0;
		
		for(int i = 0; i < n; i++)
			soma += m[i] - '0';
			
		cout << soma << " " << (soma % 3 == 0 ? "sim" : "nao") << endl;
		
	}
	
	return 0;
}