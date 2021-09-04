#include <iostream>
#include <sstream>

using namespace std;

int oneDigitValue(string n){
    int value, i;
    while(true){
        value = 0;
        for(i = 0; i < n.size(); i++){
            value += n[i] - '1' + 1;
        }

        if(value < 10)
            return value;
        else{
            stringstream ss;
            ss << value;
            n = ss.str();
        }

    }
}

int main() {

    string n, m;
    int v1, v2;

    while(cin >> n >> m){
        if(n == "0" && m == "0")
            break;

        v1 = oneDigitValue(n);
        v2 = oneDigitValue(m);

        if(v1 > v2)
            cout << 1 << endl;
        else if(v2 > v1)
            cout << 2 << endl;
        else
            cout << 0 << endl;

    }

    return 0;
}
