#include <iostream>
#include <vector>

using namespace std;

int main(){

    int a;

    while(cin >> a){
        if(a % 6 == 0)
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }

    return 0;
}
