#include <iostream>

using namespace std;

int main(){

    int k;
    cin >> k;

    cout << "Top ";

    if(k > 50)
        cout << 100;
    else if(k > 25)
        cout << 50;
    else if(k > 10)
        cout << 25;
    else if(k > 5)
        cout << 10;
    else if(k > 3)
        cout << 5;
    else if(k > 1)
        cout << 3;
    else
        cout << 1;

    cout << endl;

    return 0;
}
