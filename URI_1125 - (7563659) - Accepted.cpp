#include <iostream>

using namespace std;

int main() {
	
	int g, p, s, k, maior;
	bool print;
	
	while(cin >> g >> p && g > 0){
		
		int classific[g][p+1];
		int pontos[p+1];
		
		for(int i = 0; i < g; i++){
			for(int j = 1; j <= p; j++){
				cin >> classific[i][j];
			}
		}
		
		cin >> s;
		
		while(s--){
			cin >> k;
			
			int pontuacao[k+1];
			
			for(int i = 1; i <= k; i++)
				cin >> pontuacao[i];
				
			for(int i = 1; i <= p; i++)
				pontos[i] = 0;
				
			for(int i = 0; i < g; i++){
				for(int j = 1; j <= p; j++){
					if(classific[i][j] <= k){
						pontos[j] += pontuacao[classific[i][j]];
					}
				}
			}
			
			maior = 0;
			
			for(int i = 1; i <= p; i++){
				if(pontos[i] > maior){
					maior = pontos[i];
				}
			}
			
			print = false;
			
			for(int i = 1; i <= p; i++){
				if(pontos[i] == maior){
					if(print)
						cout << " ";
					else
						print = true;
						
					cout << i;
				}
			}
			
			cout << endl;
			
		}
		
	}
	
	return 0;
}