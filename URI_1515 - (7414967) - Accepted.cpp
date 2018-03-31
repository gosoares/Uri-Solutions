#include <iostream>

using namespace std;

int main() {

    int n, a, t, menor;
    string planeta, primeira;

    while((cin >> n) && n > 0){

        menor = 9999;

        while(n--){
            cin >> planeta >> a >> t;

            if(a - t < menor){
                menor = a - t;
                primeira = planeta;
            }
        }

        cout << primeira << endl;

    }

    return 0;
}
