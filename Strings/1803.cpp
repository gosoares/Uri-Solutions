#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
 
    vector<string> matring(4);

    for (int i = 0; i < 4; i++) {
        cin >> matring[i];
    }

    vector<int> values(matring.front().size());

    for (int i = 0; i < matring.front().size(); i++) {
        values[i] = (matring[0][i] - '0') * 1000 + (matring[1][i] - '0') * 100
                  + (matring[2][i] - '0') *   10 + (matring[3][i] - '0') *   1;
    }

    for (int i = 1; i < values.size() - 1; i++) {
        char c = (values.front() * values[i] + values.back()) % 257;
        cout << c;
    }

    cout << endl;
 
    return 0;
}