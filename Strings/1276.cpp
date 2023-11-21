#include <iostream>

using namespace std;

int main() {
	
	string line;
	char first;
	bool faixa, print;
	
	while(getline(cin, line)){
		
		bool contains[27];
		
		for(int i = 0; i < 27; i++){
			contains[i] = false;
		}
		
		for(int i = 0; i < line.size(); i++){
			if(line[i] != ' ')
				contains[line[i] - 'a'] = true;
		}
		
		faixa = false, print = false;
		for(int i = 0; i < 27; i++){
			if(!contains[i] && faixa == true){
				if(print)
					cout << ", ";
				else
					print = true;
				
				cout << (char) (first + 'a') << ":" << (char) (i - 1 + 'a');
				faixa = false;
			}else if(contains[i] && faixa == false){
				faixa = true;
				first = i;
			}
		}
		cout << endl;
		
	}
	
	return 0;
}