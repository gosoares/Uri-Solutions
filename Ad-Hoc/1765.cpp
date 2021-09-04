#include <iostream>

using namespace std;

int main() {
	
	cout << fixed;
	cout.precision(2);
	
	int t, q;
	double a, b;
	
	while(cin >> t && t > 0){
		
		for(int caso = 1; caso <= t; caso++){
			
			cin >> q >> a >> b;
			
			cout << "Size #" << caso << ":" << endl;
			cout << "Ice Cream Used: " << (a + b) * 2.5 * q << " cm2" << endl;
			
		}
		
		cout << endl;
		
	}
	
	return 0;
}