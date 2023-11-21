#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    string nome;
    unsigned long long int total = 0, n = 0, l;

    while(getline(cin, nome) && cin >> l){
        cin.ignore();

        total += l;
        n++;
    }

    cout << fixed << setprecision(1) << (double) total / n << endl;

    return 0;
}
