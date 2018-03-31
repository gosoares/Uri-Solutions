#include <iostream>

using namespace std;

int ehPossivel(int* muro, int n, int p){

    bool possivel;

    for(int i = p-1; i <= n-p; i++){
        possivel = true;
        for(int j = 0; j < p; j++){
            if(muro[i-j] < p-j || muro[i+j] < p-j){
                possivel = false;
                break;
            }
        }
        if(possivel)
            return true;
    }

    return false;
}

int main() {

    int n;

    cin >> n;

    int muro[n];

    for(int i = 0; i < n; i++)
        cin >> muro[i];


    int menor = 1, maior = (n + 1) / 2, mid;

    while(menor < maior){
        mid = (maior + menor) / 2;

        if(ehPossivel(muro, n, mid)){
            menor = mid;
        }else
            maior = mid - 1;

        if(maior == menor + 1){
            if(!ehPossivel(muro, n, maior))
                maior--;
			break;
        }

    }

    cout << maior << endl;


    return 0;
}
