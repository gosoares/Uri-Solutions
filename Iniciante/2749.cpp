#include <iostream>
 
using namespace std;
 
void tracos() {
    for(unsigned int i = 0; i < 39; i++)
        cout << "-";
    cout << endl;
}

void barras(int x) {
    cout << "|";
    int before = 15.5 * x;
    for(unsigned int i = 0; i < before; i++) cout << " ";
    cout << "x = 35";
    for(unsigned int i = 0; i < 31 - before; i++) cout << " ";
    cout << "|" << endl;
}

void barras() {
    cout << "|";
    for (int i = 0; i < 37; i++) cout << " ";
    cout << "|" << endl;
}

int main() {
    tracos();
    barras(0);
    barras();
    barras(1);
    barras();
    barras(2);
    tracos();
    return 0;
}