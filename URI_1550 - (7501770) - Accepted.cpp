#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int inverso(int valor){
	
	int result = 0;
	
	while(valor > 0){
		result = result * 10 + (valor % 10);
		valor /= 10;
	}
	
	return result;
}

int BFS(int root, int target){
	
	bool visitado[100006];
	memset(visitado, false, sizeof(visitado));

	queue<pair<int, int> > fila;	
	
	fila.push(pair<int, int>(root, 0));
	visitado[root] = true;
	
	while(!fila.empty()){
		
		pair<int, int> node = fila.front();
		fila.pop();
		
		int a = node.first + 1;
		int b = inverso(node.first);
		
		if(a == target || b == target)
			return node.second + 1;
			
		if(!visitado[a]){
			fila.push(pair<int, int>(a, node.second + 1));
			visitado[a] = true;
		}
		
		if(!visitado[b]){
			fila.push(pair<int, int>(b, node.second + 1));
			visitado[b] = true;
		}
	}	
	
}

int main() {
	
	int t, a, b;
	
	cin >> t;
	
	while(t--){
		cin >> a >> b;
		cout << BFS(a, b) << endl;
	}
	
	return 0;
}