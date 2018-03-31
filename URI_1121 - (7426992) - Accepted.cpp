#include <iostream>

using namespace std;

struct Orientacao{
    int dx, dy;

    void set(int dx, int dy){
        this->dx = dx;
        this->dy = dy;
    }

};

struct Posicao{
    int x, y;

    void set(int x, int y){
        this->x = x;
        this->y = y;
    }

    void move(Orientacao &o){
        x += o.dx;
        y += o.dy;
    }

    void volta(Orientacao &o){
        x -= o.dx;
        y -= o.dy;
    }

};

int main() {

    Orientacao orientacoes[4];
    orientacoes[0].set(0, -1); // N
    orientacoes[1].set(1, 0); // L
    orientacoes[2].set(0, 1); // S
    orientacoes[3].set(-1, 0); // O

    int n, m, s, o, figurinhas;
    Posicao p;
    string instrucao;

    while(cin >> n >> m >> s && n > 0){

        char arena[n][m];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> arena[i][j];

                if(arena[i][j] == 'N'){
                    p.set(j, i);
                    o = 0;
                }else if(arena[i][j] == 'L'){
                    p.set(j, i);
                    o = 1;
                }else if(arena[i][j] == 'S'){
                    p.set(j, i);
                    o = 2;
                }else if(arena[i][j] == 'O'){
                    p.set(j, i);
                    o = 3;
                }

            }
        }

        cin >> instrucao;

        figurinhas = 0;
        for(int i = 0; i < instrucao.size(); i++){
            if(instrucao[i] == 'D'){
                o++;
                if(o > 3)
                    o = 0;
            }else if(instrucao[i] == 'E'){
                o--;
                if(o < 0)
                    o = 3;
            }else{ // instrucao = 'F' frente

                p.move(orientacoes[o]);

                if(p.x < 0 || p.x >= m || p.y < 0 || p.y >= n || arena[p.y][p.x] == '#'){
                    p.volta(orientacoes[o]);
                }else if(arena[p.y][p.x] == '*'){
                    figurinhas++;
                    arena[p.y][p.x] = '.';
                }

            }
        }

        cout << figurinhas << endl;

    }


    return 0;
}
