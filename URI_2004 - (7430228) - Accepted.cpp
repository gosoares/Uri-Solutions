#include <iostream>
#include <algorithm>

using namespace std;

struct Alimento{
    int t;
    int p;
};

bool sortAlimentos(Alimento a1, Alimento a2){
    if(a1.t == a2.t){
        return a1.p > a2.p;
    }else{
        return a1.t < a2.t;
    }
}

int main() {

    bool adicionou;
    int q, n, t, p, tipoAtual, maior, total;
    cin >> q;

    while(q--){

        cin >> n;

        Alimento alimentos[n];

        for(int i = 0; i < n; i++){
            cin >> alimentos[i].t >> alimentos[i].p;
        }

        sort(alimentos, alimentos + n, sortAlimentos);


        tipoAtual = -1, maior = 0, adicionou = true, total = 0;
        for(int i = 0; i < n; i++){
            if(alimentos[i].t != tipoAtual){
                tipoAtual = alimentos[i].t;

                if(!adicionou){
                    total += maior;
                }

                if(alimentos[i].p >= 10 && alimentos[i].p <= 100){
                    total += alimentos[i].p;
                    adicionou = true;
                }else{
                    maior = alimentos[i].p;
                    adicionou = false;
                }

            }else if(!adicionou && alimentos[i].p >= 10 && alimentos[i].p <= 100){
                total += alimentos[i].p;
                adicionou = true;
            }
        }

        if(!adicionou)
            total += maior;

        cout << total << endl;

    }


    return 0;
}
