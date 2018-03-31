#include <iostream>
#include <map>

using namespace std;

int main() {

    char teclado[51] = "  `1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    int i, j;
    string line;

    while(getline(cin, line)){
        for(i = 0; i < line.size(); i++){
            for(j = 1; j < 51; j++){
                if(line[i] == teclado[j]){
                    cout << teclado[j-1];
                    break;
                }
            }
        }
        cout << endl;
    }

    return 0;
}
