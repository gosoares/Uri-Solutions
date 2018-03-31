#include <iostream>

using namespace std;

int main(){

    int n, la, lb, sa, sb;

    cin >> n;
    cin >> la >> lb;
    cin >> sa >> sb;

    if(n >= la && n <= lb && n >= sa && n <= sb)
        cout << "possivel" << endl;
    else
        cout << "impossivel" << endl;

    return 0;
}
