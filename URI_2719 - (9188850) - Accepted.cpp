#include <iostream>

using namespace std;

int main() {
	
	int t;

    cin >> t;

    while(t--) {

        int n, m;

        cin >> n >> m;

        int pesos[n];

        for(int i = 0; i < n; i++) {
            cin >> pesos[i];
        }

        int viagens = 0, pesoAtual = 0;

        for(int i = 0; i < n; i++) {
            if(pesoAtual + pesos[i] <= m) {
                pesoAtual += pesos[i];
            } else {
                viagens++;
                pesoAtual = pesos[i];
            }

        }
        if(pesoAtual > 0)
            viagens++;

        cout << viagens << endl;

    }
	
	return 0;
}