#include <iostream>

using namespace std;

int main() {

    int n, anterior, atual = 0, iQueda = 0;

    cin >> n;

    for(int i = 1; i <= n; i++){
        anterior = atual;
        cin >> atual;

        if(atual < anterior && iQueda == 0)
            iQueda = i;
    }

    cout << iQueda << endl;

    return 0;
}
