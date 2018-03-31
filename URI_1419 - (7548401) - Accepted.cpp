#include <iostream>

using namespace std;

int main() {
	
	int rodadas, pontosMark, pontosLeti;
	bool bonusMark, bonusLeti;
	
	while(cin >> rodadas && rodadas > 0){
		
		int mark[rodadas], leti[rodadas];
		
		pontosMark = 0, pontosLeti = 0;
		
		for(int i = 0; i < rodadas; i++){
			cin >> mark[i];
			pontosMark += mark[i];
		}
		
		for(int i = 0; i < rodadas; i++){
			cin >> leti[i];
			pontosLeti += leti[i];
		}
		
		for(int i = 2; i < rodadas; i++){
			bonusMark = mark[i-2] == mark[i-1] && mark[i-1] == mark[i];
			bonusLeti = leti[i-2] == leti[i-1] && leti[i-1] == leti[i];
			
			if(bonusMark && !bonusLeti){
				pontosMark += 30;
				break;
			}else if(bonusLeti && !bonusMark){
				pontosLeti += 30;
				break;
			}else if(bonusMark && bonusLeti){
				break;
			}
			
		}
		
		if(pontosMark > pontosLeti)
			cout << "M" << endl;
		else if(pontosMark < pontosLeti)
			cout << "L" << endl;
		else
			cout << "T" << endl;
		
	}
	
	return 0;
}