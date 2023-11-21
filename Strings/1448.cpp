#include <iostream>

using namespace std;

int main() {
	
	int t, pt1, pt2, desempate;
	string correta, time1, time2;
	
	cin >> t;
	cin.ignore();
	
	for(int instance = 1; instance <= t; instance++){
		
		getline(cin, correta);
		getline(cin, time1);
		getline(cin, time2);
		
		pt1 = 0, pt2 = 0, desempate = 0;
		
		for(int i = 0; i < correta.size(); i++){
			
			if(time1[i] == correta[i]){
				pt1++;
				if(desempate == 0 && time2[i] != correta[i])
					desempate = 1; 
			}
				
				
			if(time2[i] == correta[i]){
				pt2++;
				if(desempate == 0 && time1[i] != correta[i])
					desempate = 2; 
			}		
		}
		
		cout << "Instancia " << instance << endl;
		if(pt1 > pt2)
			cout << "time 1" << endl;
		else if(pt1 < pt2)
			cout << "time 2" << endl;
		else{
			if(desempate == 1)
				cout << "time 1" << endl;
			else if(desempate == 2)
				cout << "time 2" << endl;
			else
				cout << "empate" << endl;
		}
			
		cout << endl;
		
	}
	
	return 0;
}
