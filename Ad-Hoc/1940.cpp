#include <iostream>

using namespace std;

int main() {
	
	int j, r, x;
	cin >> j >> r;
	
	int pontos[j];
	
	for(auto &p : pontos)
		p = 0;
		
	r *= j;
		
	for(int i = 0; i < r; i++){
		cin >> x;
		pontos[i%j] += x;
	}
	
	int maior = j-1;
	
	for(int i = j-2; i >= 0; i--){
		if(pontos[i] > pontos[maior]){
			maior = i;
		}
	}
	
	cout << maior + 1 << endl;
	
	return 0;
}