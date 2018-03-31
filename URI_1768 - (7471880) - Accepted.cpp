#include <iostream>

using namespace std;

int main(){
	
	int n;
	
	while(cin >> n){
		
		for(int i = 0; i + i < n; i++){
			
			for(int j = 1; j + j < n - i - i; j++)
				cout << " ";
				
			for(int j = 0; j < i + i + 1; j++)
				cout << "*";
			
			cout << endl;
		}
		
		for(int i = 1; i + i < n; i++)
			cout << " ";
		cout << "*" << endl;
		for(int i = 2; i + i < n; i++)
			cout << " ";
		cout << "***" << endl;
		cout << endl;
		
	}
	
	return 0;
}