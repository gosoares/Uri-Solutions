#include <iostream>
#include <algorithm>

using namespace std;

struct Intervalo{
	int a;
	int b;
	
};

bool focosComparator(Intervalo i1, Intervalo i2){
	return i1.a < i2.a;
}

int main() {
	
	int n, b, fotos;
	
	while(cin >> n){
		
		Intervalo focos[n];
		
		for(int i = 0; i < n; i++){
			cin >> focos[i].a >> focos[i].b;
		}
		
		sort(focos, focos + n, focosComparator);
		
		fotos = 1;
		b = focos[0].b;
		
		for(int i = 1; i < n; i++){
			if(focos[i].a <= b){
				
				if(focos[i].b < b)
					b = focos[i].b;
				
			}else{
				fotos++;
				b = focos[i].b;
			}
		
		}
		
		cout << fotos << endl;		
		
	}
	
	
	return 0;
}