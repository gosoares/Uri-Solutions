#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Partida{
    int s, r;

    Partida(int s, int r){
        this->s = s;
        this->r = r;
    }

};

bool sortPartidas(Partida *p1, Partida *p2){
    return (p1->s - p1->r) > (p2->s - p2->r);
}

int main() {

    int n, g, s, r, pontos;

    while(cin >> n >> g){

        vector<Partida *> partidas(n);

        for(int i = 0; i < n; i++){
            cin >> s >> r;
            partidas[i] = new Partida(s, r);
        }

        sort(partidas.begin(), partidas.end(), sortPartidas);

        pontos = 0;
        for(int i = 0; i < n; i++){
            if(partidas[i]->s > partidas[i]->r){
                pontos += 3;
            }else if(g >= partidas[i]->r - partidas[i]->s){

                g -= partidas[i]->r - partidas[i]->s;

                if(g > 0){
                    g--;
                    pontos += 3;
                }else{
                    pontos++;
                }

            }else{
                break;
            }
        }

        cout << pontos << endl;

    }

    return 0;
}
