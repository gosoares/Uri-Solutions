#include <iostream>
 
using namespace std;
 
int main() {
 
    unsigned int n, a, b;
    cin >> n >> a >> b;

    if(a + b > n)
        cout << "Deixa para amanha!" << endl;
    else 
        cout << "Farei hoje!" << endl;
 
    return 0;
}