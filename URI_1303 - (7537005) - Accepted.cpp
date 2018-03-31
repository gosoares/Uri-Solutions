#include <iostream>
#include <algorithm>

using namespace std;

#define max(x, y) (x > y ? x : y)

struct Time{
	int inscricao, pontos, recebidos, marcados;
	double average;
	
	Time(){
		pontos = 0;
		recebidos = 0;
		marcados = 0;
	}
};

bool timesComparator(Time t1, Time t2){
	if(t1.pontos != t2.pontos){
		return t1.pontos > t2.pontos;
	}else if(t1.average != t2.average){
		return t1.average > t2.average;
	}else if(t1.marcados != t2.marcados){
		return t1.marcados > t2.marcados;
	}else{
		return t1.inscricao > t2.inscricao;
	}
}

int main() {
	
	int n, jogos, x, y, z, w;
	bool println = false;
	
	for(int caso = 1; cin >> n && n > 0; caso++){
		Time times[n+1];
		
		jogos = n * (n - 1) / 2;
		
		while(jogos--){
			cin >> x >> y >> z >> w;
			
			times[x].marcados += y;
			times[x].recebidos += w;
			
			times[z].marcados += w;
			times[z].recebidos += y;
			
			if(y > w){
				times[x].pontos += 2;
				times[z].pontos++;
			} else{
				times[x].pontos++;
				times[z].pontos += 2;
			}
		}
		
		for(int i = 1; i <= n; i++){
			times[i].inscricao = i;
			times[i].average = (double) times[i].marcados / max(times[i].recebidos, 1);
		}
		
		sort(times + 1, times + 1 + n, timesComparator);
		
		if(println)
			cout << endl;
		else
			println = true;
		cout << "Instancia " << caso << endl;
		for(int i = 1; i < n; i++)
			cout << times[i].inscricao << " ";
		cout << times[n].inscricao << endl;
	}
	
	return 0;
}