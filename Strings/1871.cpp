#include <iostream>
#include <sstream>

using namespace std;

int main(){

    int n, m;
    string numero;
    stringstream ss;

    while(cin >> n >> m){
        if(n == 0 && m == 0)
            break;

        ss << m + n;
        numero = ss.str();
        ss.str("");
        ss.clear();

        for(int i = 0; i < numero.size(); i++){
            if(numero[i] != '0')
                cout << numero[i];
        }
        cout << endl;

    }

    return 0;
}
