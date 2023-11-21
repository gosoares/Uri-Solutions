#include <iostream>
 
using namespace std;
 
void tracos() {
    for(unsigned int i = 0; i < 39; i++)
        cout << "-";
    cout << endl;
}

void barras() {
    cout << "|";
    for(unsigned int i = 0; i < 37; i++)
        cout << " ";
    cout << "|" << endl;
}

int main() {
    tracos();
    for(unsigned int i = 0; i < 5; i++)
        barras();
    tracos();
    return 0;
}