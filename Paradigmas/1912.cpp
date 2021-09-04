#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double corta(vector<int> &tiras, double corte){
    unsigned int i = 0;
    double cortado = 0;

    while(i < tiras.size() && tiras[i] > corte){
        cortado += tiras[i] - corte;
        i++;
    }

    return cortado;

}

int main() {

    cout << fixed;
    cout.precision(4);

    int n, a, areaTotal;

    double menor, maior, mid;

    while(cin >> n >> a && n > 0){

        vector<int> tiras(n);
        areaTotal = 0, menor = 0, maior = 0;

        for(int i = 0; i < n; i++){
            cin >> tiras[i];
            areaTotal += tiras[i];

            if(tiras[i] > maior)
                maior = tiras[i];
        }

        if(areaTotal == a){
            cout << ":D" << endl;
            continue;
        }else if(areaTotal < a){
            cout << "-.-" << endl;
            continue;
        }


        sort(tiras.rbegin(), tiras.rend());

        while(maior - menor > 0.000001){
            mid = (maior + menor) / 2;

            if(corta(tiras, mid) > a){
                menor = mid;
            }else{
                maior = mid;
            }
        }

        cout << mid << endl;

    }

    return 0;
}
