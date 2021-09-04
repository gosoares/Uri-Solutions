#include <iostream>

using namespace std;

int main(){

    int n, dias;

    double c;

    cin >> n;

    while(n--){
        cin >> c;
        for(dias = 0; c > 1; dias++, c /= 2);

        cout << dias << " dias" << endl;

    }

    return 0;
}
