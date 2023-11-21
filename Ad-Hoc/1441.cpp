#include <iostream>

using namespace std;

int main(){

    int h, maior;


    while(cin >> h){
        if(h == 0)
            break;

        maior = h;

        while(h != 1){
            if(h % 2 == 0)
                h = h/2;
            else
                h = 3*h + 1;

            if(h > maior)
                maior = h;
        }

        cout << maior << endl;

    }

    return 0;
}
