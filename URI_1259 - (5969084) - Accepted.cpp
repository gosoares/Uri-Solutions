#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool crescente(unsigned long int a, unsigned long int b){
    return a < b;
}

bool decrescente(unsigned long int a, unsigned long int b){
    return a > b;
}

int main() {

    vector<int> pares, impares;

    unsigned long int n, a;
    cin >> n;

    while(n--){
        cin >> a;

        if(a%2 == 0)
            pares.push_back(a);
        else
            impares.push_back(a);
    }

    sort(pares.begin(), pares.end(), crescente);
    sort(impares.begin(), impares.end(), decrescente);

    for(int i = 0; i < pares.size(); i++)
        cout << pares[i] << endl;

    for(int i = 0; i < impares.size(); i++)
        cout << impares[i] << endl;


    return 0;
}
