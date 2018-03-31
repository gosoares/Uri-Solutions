#include <iostream>

using namespace std;

int main() {
	
	string s;
	
	cin >> s;
	
	int notas = 0, soma = 0;
	
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '1'){
			if(i +1 < s.size() && s[i+1] == '0'){
				soma += 10;
				i++;
			}else{
				soma += 1;
			}
		}else{
			soma += s[i] - '0'; 
		}
		notas++;
	}
	
	cout.precision(2);
	cout << fixed << (double) soma / notas << endl;
	
	return 0;
}