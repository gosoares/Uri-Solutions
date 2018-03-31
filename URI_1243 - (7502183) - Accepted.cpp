#include <iostream>
#include <sstream>

using namespace std;

bool isLetter(char c){
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool isWord(string symbol){
	
	if(symbol.size() == 1){
		return isLetter(symbol[0]);
	}
	
	bool word = true;
	int i;
	for(i = 0; i < symbol.size() - 1; i++){
		if( !isLetter(symbol[i]) ){
			return false;
		}
	}
	
	if(!isLetter(symbol[i]) && symbol[i] != '.')
		return false;
		
	return true;
	
}

int main() {
	
	string line, symbol;
	int words, sum, media;
	
	while(getline(cin, line)){
		words = 0, sum = 0;
		istringstream iss(line);
		
		while(iss >> symbol){
			if(isWord(symbol)){
				words++;
				sum += symbol.size();
				if(symbol[symbol.size()-1] == '.')
					sum--;
			}
		}
		
		media = (words == 0 ? 0 : sum / words);
		
		if(media <= 3)
			cout << 250 << endl;
		else if(media <= 5)
			cout << 500 << endl;
		else
		cout << 1000 << endl;
	}
	
	return 0;
}