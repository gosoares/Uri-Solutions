#include <iostream>

using namespace std;

int main() {

    int n, id, i, j, qtd;

    while(cin >> n >> id){

        qtd = 0;
        while(n--){
            cin >> i >> j;

            if(i == id && j == 0)
                qtd++;
        }

        cout << qtd << endl;

    }

    return 0;
}
