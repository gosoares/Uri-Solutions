#include <iostream>

using namespace std;

int main() {

    string line;
    int i, s;

    while(getline(cin, line)){

        for(i = 0, s = line.size(); i < s; i++){
            if(line[i] >= 'a' && line[i] <= 'z')
                line[i] = (line[i] - 'a' + 13) % ('z' - 'a' + 1) + 'a';
            else if(line[i] >= 'A' && line[i] <= 'Z')
                line[i] = (line[i] - 'A' + 13) % ('Z' - 'A' + 1) + 'A';
        }

        cout << line << endl;

    }

}
