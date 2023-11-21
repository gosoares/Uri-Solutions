#include <iostream>

using namespace std;

int main() {

    string line;
    int n, i, s;
    bool print;

    cin >> n;
    cin.ignore();

    while(n--){
        getline(cin, line);

        s = line.size();

        print = true;
        for(i = 0; i < s; i++){
            if(line[i] == ' ')
                print = true;
            else if(print){
                cout << line[i];
                print = false;
            }
        }

        cout << endl;

    }

    return 0;
}
