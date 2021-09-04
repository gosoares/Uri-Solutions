#include <iostream>
using namespace std;

#define capacidade 50

int main() {

	int n, pac;

	cin >> n;

	while(n--){

		cin >> pac;

		int peso[pac];
		int qt[pac];

		for (int i = 0; i < pac; i++)
			cin >> qt[i] >> peso[i];

		/*
		 * maximo[i][j] armazenara a solução ótima para uma mochila de capacidade i usando os produtos [j...numProdutos]
		 * (considerando que os produtos estão com indices começando do 0)
		 * Dessa forma, maximo[capacidade][0] armazenara a solução ótima do problema completo.
		 */
		int maximo[capacidade + 1][pac + 1];

		/*
		 * estUsando[i][j] armazenara se a solução maximo[i][j] está usando ou não o produto j
		 * */
		bool estUsando[capacidade + 1][pac];

		// o valor máximo que conseguimos usando nenhum produto é trivialmente 0
		for (int i = 0; i <= capacidade; i++)
			maximo[i][pac] = 0;

		for (int prodAtual = pac - 1; prodAtual >= 0; prodAtual--) {
			for (int pesoAtual = 0; pesoAtual <= capacidade; pesoAtual++) {

				// valor ótimo não usando o produto atual
				int naoUsando = maximo[pesoAtual][prodAtual + 1];

				if (peso[prodAtual] > pesoAtual) { // se o produto não couber na mochila com o peso atual, ele não pode ser usado

					maximo[pesoAtual][prodAtual] = naoUsando;
					estUsando[pesoAtual][prodAtual] = false;

				} else { // produto atual cabe na mochila, talvez faça parte dessa solução ótima

					// valor ótimo usando o produto atual
					int usando = maximo[pesoAtual - peso[prodAtual]][prodAtual + 1]
							+ qt[prodAtual];

					// verifica se é mais vantajoso usar, ou não usar o produto atual
					if (usando > naoUsando) {
						maximo[pesoAtual][prodAtual] = usando;
						estUsando[pesoAtual][prodAtual] = true;
					} else {
						maximo[pesoAtual][prodAtual] = naoUsando;
						estUsando[pesoAtual][prodAtual] = false;
					}

				}
			}
		}

		bool estaUsando[pac]; // estaUsando[i] armazenara se o produto i está ou não na solução ótima

		for (int prodAtual = 0, pesoDisp = capacidade; prodAtual < pac;
				prodAtual++) {
			estaUsando[prodAtual] = estUsando[pesoDisp][prodAtual];

			// se usou o prodAtual, então tira seu peso da mochila
			if (estaUsando[prodAtual])
				pesoDisp -= peso[prodAtual];
		}

		int sobram = 0;
		int pesoUsando = 0;
		for (int prod = 0; prod < pac; prod++){
			if (estaUsando[prod]){
				pesoUsando += peso[prod];
			}else{
				sobram++;
			}
		}

		cout << maximo[capacidade][0] << " brinquedos" << endl;
		cout << "Peso: " << pesoUsando << " kg" << endl;
		cout << "sobra(m) " << sobram << " pacote(s)" << endl << endl;

	}

	return 0;
}
