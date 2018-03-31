#include <iostream>

using namespace std;

int main() {

    int i;
    char d;
    string n;
    bool printou;

    while(true){
        cin >> d >> n;
        if(d == '0' && n == "0")
            break;

        printou = false;

        for(i = 0; i < n.size(); i++){
           if(n[i] != d && (printou || n[i] != '0')){
                cout << n[i];
                printou = true;
           }
        }

        if(!printou)
            cout << '0';

        cout << endl;

    }

    return 0;
}
