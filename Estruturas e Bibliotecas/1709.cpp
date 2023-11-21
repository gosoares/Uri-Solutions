#include <iostream>

using namespace std;


int main() {
	
	int p;
	
	cin >> p;
	
	int meio = p / 2, pos = 0, total = 0;
	
	do{
		if(pos < meio){
			pos = (2*pos) + 1;
		}else{
			pos = 2*(pos-meio);
		}
		total++;
	}while(pos != 0);
	
	cout << total << endl;
	
	return 0;
}