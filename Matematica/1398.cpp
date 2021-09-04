#include <iostream>

using namespace std;

int main() {

    string line;
    unsigned int n = 0;

    while(getline(cin, line)){
        for(unsigned int i = 0; i < line.size(); i++) {
            if(line[i] == '#') {
                cout << ((n == 0) ? "YES" : "NO") << endl;
                n = 0;
            } else {
                n = ((n << 2) + (line[i] - '0')) % 131071;
            }
        }
    }

    return 0;
}