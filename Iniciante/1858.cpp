#include <iostream>

using namespace std;

int main() {

    int n, menor, iMenor = 1, t;

    cin >> n;

    cin >> menor;

    for(int i = 2; i <= n; i++){
        cin >> t;
        if(t < menor){
            menor = t;
            iMenor = i;
        }
    }

    cout << iMenor << endl;

    return 0;
}
