#include <iostream>

using namespace std;

int main() {

    int x, y;

    cin >> x;
    cin >> y;

    char mapa[y][x];

    for(int i = 0; i < y; i++)
        for(int j = 0; j < x; j++)
            cin >> mapa[i][j];

    bool valido = true;

    int xAtual = 0, yAtual = 0, addX, addY;

    if(mapa[0][0] == '>'){
        addX = 1;
        addY = 0;
    }else if(mapa[0][0] == 'v'){
        addX = 0;
        addY = 1;
    }else if(mapa[0][0] == '*'){
        addX = 0;
        addY = 0;
    }else {
        valido = false;
    }

    while(valido){
        xAtual += addX;
        yAtual += addY;

        if(xAtual < 0 || xAtual >= x || yAtual < 0 || yAtual >= y || mapa[yAtual][xAtual] == '!'){
            valido = false;
        } else if(mapa[yAtual][xAtual] == '>'){
            mapa[yAtual][xAtual] = '!';
            addX = 1;
            addY = 0;
        } else if(mapa[yAtual][xAtual] == '<'){
            mapa[yAtual][xAtual] = '!';
            addX = -1;
            addY = 0;
        } else if(mapa[yAtual][xAtual] == 'v'){
            mapa[yAtual][xAtual] = '!';
            addX = 0;
            addY = 1;
        } else if(mapa[yAtual][xAtual] == '^'){
            mapa[yAtual][xAtual] = '!';
            addX = 0;
            addY = -1;
        } else if(mapa[yAtual][xAtual] == '*'){
            break;
        }

    }

    if(valido)
        cout << '*' << endl;
    else
        cout << '!' << endl;

    return 0;
}
