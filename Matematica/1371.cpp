#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> abertas;

    for(int aberta = 1, add = 3; aberta <= 25000000; aberta += add, add += 2 ){
        abertas.push_back(aberta);
    }
    abertas.push_back(999999999);

    int n, i;

    while(cin >> n){
        if(n == 0)
            break;

        i = 1;
        cout << "1";
        while(abertas[i] <= n){
            cout << " " << abertas[i];
            i++;
        }
        cout << endl;

    }

    return 0;
}
