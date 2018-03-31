#include <iostream>

using namespace std;

int main() {

    string line;
    int n, m;

    cin >> n;
    cin.ignore();

    while(n--){
        getline(cin, line);

        m = line.size() / 2 - 1;

        for(int i = m; i >= 0; i--)
            cout << line[i];

        for(int i = line.size() - 1; i > m; i--)
            cout << line[i];

        cout << endl;

    }

    return 0;
}
