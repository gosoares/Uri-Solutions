#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, hobbits = 0, humans = 0, elfs = 0, dwarfs = 0, mages = 0;
    cin >> n;

    string s;
    char c;
    while (n--) {
        cin >> s >> c;

        if (c == 'A') dwarfs++;
        else if (c == 'E') elfs++;
        else if (c == 'H') humans++;
        else if (c == 'M') mages++;
        else hobbits++; // if X
    }

    cout << hobbits << " Hobbit(s)" << endl;
    cout << humans << " Humano(s)" << endl;
    cout << elfs << " Elfo(s)" << endl;
    cout << dwarfs << " Anao(s)" << endl;
    cout << mages << " Mago(s)" << endl;
 
    return 0;
}