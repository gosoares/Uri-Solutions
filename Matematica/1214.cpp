#include <iostream>
#include <vector>

using namespace std;

int main() {

    int c, n, acima, i, nota;
    double media;
    vector<int> medias;

    cin >> c;

    cout << fixed;
    cout.precision(3);

    while(c--){
        cin >> n;

        medias.clear();
        media = 0;
        for(i = 0; i < n; i++){
            cin >> nota;
            medias.push_back(nota);
            media += nota;
        }
        media /= n;

        acima = 0;
        for(i = 0; i < medias.size(); i++)
            if(medias[i] > media)
                acima++;

        cout << 100.0 * acima / n << '%' << endl;

    }

    return 0;
}
