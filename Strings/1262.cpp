#include <iostream>
#include <cmath>

using namespace std;

int main() {

    string rastro;
    int p, ciclos, rs;
    bool isr;


    while(getline(cin, rastro)){
        cin >> p;
        cin.ignore();

        ciclos = 0, isr = false, rs = 0;
        for(int i = 0; i < rastro.size(); i++){
            if(rastro[i] == 'R'){
                isr = true;
                rs++;
            }else{ // if W
                ciclos++;
                if(isr){
                    ciclos += ceil((double)rs / p);
                }
                rs = 0;
                isr = false;
            }
        }
        if(isr){
            ciclos += ceil((double)rs / p);
        }

        cout << ciclos << endl;

    }

    return 0;
}
