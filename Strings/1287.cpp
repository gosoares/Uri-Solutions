#include <iostream>
#include <climits>
using namespace std;

int main() {
	
	string line;
	unsigned long long int num;
	bool temNumero;
	
	while(getline(cin, line)){
		num = 0, temNumero = false;
		
		for(auto &c : line){
			if(c >= '0' && c <= '9'){
				temNumero = true;
				num = num*10 + c - '0';
			}else if(c == 'O' || c == 'o'){
				temNumero = true;
				num *= 10;
			}else if(c == 'l'){
				temNumero = true;
				num = num*10 + 1;
			}else if(c != ' ' && c != ','){
				temNumero = false;
				break;
			}
			
			if(num > INT_MAX){
				temNumero = false;
				break;
			}
		}
		
		if(!temNumero){
			cout << "error" << endl;
		}else {
			cout << num << endl;
		}
		
	}
	
	return 0;
}