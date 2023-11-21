#include <iostream>
#include <sstream>

using namespace std;

int main() {
	
	int n, maior;
	string line, newLine;
	bool println = false;
	
	while(cin >> n && n > 0){
		cin.ignore();
		
		string lines[n];
		
		maior = 0;
		for(int a = 0; a < n; a++){
			
			getline(cin, line);
			
			istringstream iss(line);
			ostringstream newLine;
			
			iss >> line;
			newLine << line;
			
			while(iss >> line){
					newLine << ' ' << line;
			}
			
			lines[a] = newLine.str();
			
			if(lines[a].size() > maior)
				maior = lines[a].size();
		}
		
		if(println)
			cout << endl;
		else
			println = true;
		
		for(int i = 0; i < n; i++){
			
			for(int j = 0; j < maior - lines[i].size(); j++)
				cout << ' ';
				
			cout << lines[i] << endl;
			
		}
		
	}
	
	return 0;
}