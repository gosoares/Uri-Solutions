#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

    double num, cutoff, frac;
    long long saida;

    while(cin >> num >> cutoff){
        saida = (int) num;
        frac = num - saida;

        if(frac > cutoff)
            saida++;

        cout << saida << endl;


    }

	return 0;
}
