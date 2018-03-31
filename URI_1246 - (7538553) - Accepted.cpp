#include <iostream>
#include <list>

using namespace std;

#define VAZIO -1

struct Vaga{
	
	int placa;
	int comprimento;
	
	Vaga(int placa, int comprimento){
		this->placa = placa;
		this->comprimento = comprimento;
	}
	
};

int main() {
	
	int comprimentoEstacionamento, eventos, placa, comprimento, faturamento;
	list<Vaga> estacionamento;
	list<Vaga>::iterator it, it2;
	char evento;
	
	while(cin >> comprimentoEstacionamento >> eventos){
		estacionamento.clear();
		
		estacionamento.push_back(Vaga(VAZIO, comprimentoEstacionamento));
		
		faturamento = 0;
		while(eventos--){
			cin >> evento >> placa;
			
			if(evento == 'C'){
				cin >> comprimento;
				
				for(it = estacionamento.begin(); it != estacionamento.end(); it++){
					if((*it).placa == VAZIO && (*it).comprimento >= comprimento){
						(*it).comprimento -= comprimento;
						estacionamento.insert(it, Vaga(placa, comprimento));
						faturamento += 10;
						break;
					}
				}
			}else{
				for(it = estacionamento.begin(); it != estacionamento.end(); it++){
					if((*it).placa == placa){
						(*it).placa = VAZIO;
						
						if(it != estacionamento.begin()){
							it2 = it;
							it2--;
							
							if((*it2).placa == VAZIO){
								(*it).comprimento += (*it2).comprimento;
								estacionamento.erase(it2);
							}	
							
						}
						
						it2 = it;
						it2++;
						
						if(it2 != estacionamento.end() && (*it2).placa == VAZIO){
							(*it).comprimento += (*it2).comprimento;
							estacionamento.erase(it2);	
						}
						
						break;
						
					}
				}
			}
		}
		
		cout << faturamento << endl;
		
	}
	
	return 0;
}