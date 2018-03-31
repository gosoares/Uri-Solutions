#include <iostream>

using namespace std;

bool ehPotenciaDe2(int n){
    if(n == 2)
        return true;
    else if(n%2 == 0)
        return ehPotenciaDe2(n/2);
    else
        return false;
}

int main() {

    unsigned long long int n, ui, ri, ii, uip, rip, iip;

    while(true){
        cin >> n;
        if(n == 0)
            break;

        uip = 0, rip = 0, iip = 0;

        while(n--){
            cin >> ui >> ri >> ii;

            if(ehPotenciaDe2(ui)){
                uip++;
                if(ui > ri && ui > ii)
                    uip++;
            }

            if(ehPotenciaDe2(ri)){
                rip++;
                if(ri > ui && ri > ii)
                    rip++;
            }

            if(ehPotenciaDe2(ii)){
                iip++;
                if(ii > ui && ii > ri)
                    iip++;
            }

        }

        if(uip > rip && uip > iip)
            cout << "Uilton" << endl;
        else if(rip > uip && rip > iip)
            cout << "Rita" << endl;
        else if(iip > uip && iip > rip)
            cout << "Ingred" << endl;
        else
            cout << "URI" << endl;

    }


    return 0;
}
