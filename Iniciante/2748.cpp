#include <iostream>
 
using namespace std;
 
void tracos() {
    for(unsigned int i = 0; i < 39; i++)
        cout << "-";
    cout << endl;
}

void barras(string s = "") {
    cout << "|";
    for(unsigned int i = 0; i < 8; i++) cout << " ";
    cout << s;
    for(unsigned int i = 0; i < 29 - s.size(); i++) cout << " ";
    cout << "|" << endl;
}

int main() {
    tracos();
    barras("Roberto");
    barras();
    barras("5786");
    barras();
    barras("UNIFEI");
    tracos();
    return 0;
}