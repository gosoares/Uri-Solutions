#include <iostream>

using namespace std;

int main() {
	
	string cpf;
	int b1, b2;
	
	while(getline(cin, cpf)){
		
		b1 = 0, b2 = 0;
		for(int i = 0; i < cpf.size(); i++){
			if(i%3 == 0 && i != 0)
				cout << '.';
				
			b1 += (cpf[i] - '0') * (i+1);
			b2 += (cpf[i] - '0') * (9-i);
				
			cout << cpf[i];
		}
		
		b1 = (b1 % 11) % 10; 
		b2 = (b2 % 11) % 10;
		
		cout << "-" << b1 << b2 << endl;
		
	}
	
	return 0;
}