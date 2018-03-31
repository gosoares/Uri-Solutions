#include <iostream>

using namespace std;

int main() {

    int c;
    string s;
    double t;

    cin >> c;

    cout.precision(2);
    cout << fixed;

    while(c--){
        cin >> s;
        t = s.size()*0.01;
        cout << t << endl;
    }

    return 0;
}
