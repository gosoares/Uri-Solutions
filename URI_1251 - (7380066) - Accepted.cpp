#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Ocorrencia{
    int caracter;
    int frequencia;

    Ocorrencia(int caracter, int frequencia){
        this->caracter = caracter;
        this->frequencia = frequencia;
    }

    void print(){
        cout << caracter << " " << frequencia << endl;
    }

};

bool sortOcorrencias(Ocorrencia o1, Ocorrencia o2){
    if(o1.frequencia == o2.frequencia){
        return o1.caracter > o2.caracter;
    }else{
        return o1.frequencia < o2.frequencia;
    }
}

int main(){

    string line;

    int frequencia[128];

    for(int i = 32; i < 128; i++){
        frequencia[i] = 0;
    }

    bool primeiro = true;

    while(getline(cin, line)){

        for(int i = 0; i < line.size(); i++){
            frequencia[line[i]]++;
        }

        vector<Ocorrencia> ocorrencias;

        for(int i = 32; i < 128; i++){
            if(frequencia[i] > 0){
                Ocorrencia o(i, frequencia[i]);
                ocorrencias.push_back(o);

                frequencia[i] = 0;
            }
        }

        sort(ocorrencias.begin(), ocorrencias.end(), sortOcorrencias);

        if(primeiro)
            primeiro = false;
        else
            cout << endl;

        for(int i = 0; i < ocorrencias.size(); i++)
            ocorrencias[i].print();

    }

    return 0;
}
