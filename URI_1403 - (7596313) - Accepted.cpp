#include <iostream>
#include <map>

using namespace std;

int main() {
	
	int m, n, x, maior, segundoMaior;
	
	while(cin >> n >> m && n > 0){
		
		map<int, int> ranking;
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> x;
				ranking[x]++;
			}
		}
		
		
		maior = -1;
		for(map<int, int>::iterator it = ranking.begin(); it != ranking.end(); it++){
			if((*it).second > maior){
				segundoMaior = maior;
				maior = (*it).second;
			}else if((*it).second > segundoMaior){
				segundoMaior = (*it).second;
			}
		
		
		}
		
		for(map<int, int>::iterator it = ranking.begin(); it != ranking.end(); it++){
			if((*it).second == segundoMaior){
				cout << (*it).first << " ";
			}
		}
		cout << endl;
		
	}
	
	return 0;
}