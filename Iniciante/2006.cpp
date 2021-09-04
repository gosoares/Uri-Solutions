#include <iostream>

using namespace std;

int main() {

    int t, c, correto = 0;

    cin >> t;

    for(int i = 0; i < 5; i++){
        cin >> c;
        if(c == t)
            correto++;
    }

    cout << correto << endl;

    return 0;
}
