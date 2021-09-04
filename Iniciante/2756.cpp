#include <iostream>
 
using namespace std;
 
void printLine(int i) {
    for (int j = 0; j < i; j++) 
        cout << " ";

    cout << (char) ('A' + (7 - i));

    for(int j = 0; j < 2 * (7 - i) - 1 ; j++)
        cout << " ";

    if(i < 7) cout << (char) ('A' + (7 - i));

    cout << endl;
}

int main() {
 
    for(int i = 7; i >= 3; i--) {
        printLine(i);
    }
    for(int i = 4; i <= 7; i++) {
        printLine(i);
    }
 
    return 0;
}