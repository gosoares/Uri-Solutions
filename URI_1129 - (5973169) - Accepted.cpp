#include <iostream>

using namespace std;

int main() {

    int n, p, i, c;
    bool valido;

    while(true){
        cin >> n;
        if(n == 0)
            break;

        while(n--){
            for(i = 0, p = -1, valido = false; i < 5; i++){
                cin >> c;
                if(c <= 127){
                    if(p < 0){
                        p = i;
                        valido = true;
                    }else{
                        valido = false;
                    }
                }
            }

            if(valido)
                cout << (char) ('A' + p) << endl;
            else
                cout << '*' << endl;

        }
    }

    return 0;
}
