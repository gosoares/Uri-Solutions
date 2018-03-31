#include <iostream>

using namespace std;

char low(char c){
    if(c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}

int main() {

    string line;
    bool isTauto;
    char c;

    while(getline(cin, line)){
        if(line == "*")
            break;

        c = low(line[0]);

        isTauto = true;
        for(int i = 1; i < line.size(); i++){
            if(line[i-1] == ' ' && low(line[i]) != c){
                isTauto = false;
                break;
            }
        }

        if(isTauto)
            cout << 'Y' << endl;
        else
            cout << 'N' << endl;

    }

    return 0;
}
