#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main(){
	
	int c, n, bx, by, ox, oy, maisPerto;
	double distancia, menorDistancia;
	
	cin >> c;
	
	while(c--){
		cin >> n;
		
		cin >> bx >> by;
		
		menorDistancia = LONG_MAX;
		for(int i = 1; i <= n; i++){
			cin >> ox >> oy;
			distancia = sqrt((bx-ox)*(bx-ox) + (by-oy)*(by-oy));
			
			if(menorDistancia-distancia > 0.01){
				maisPerto = i;
				menorDistancia = distancia;
			}
			
		}
		
		cout << maisPerto << endl;
		
	}
	
}