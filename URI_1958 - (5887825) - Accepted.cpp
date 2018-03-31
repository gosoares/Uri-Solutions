#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

int main(){

    long double x;
    string line;

    cin >> line;

    stringstream ss(line);

    ss >> x;

    if(line[0] != '-')
        cout << '+';

    cout << scientific << setprecision(4) << uppercase << x << endl;

    return 0;
}
