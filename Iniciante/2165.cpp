#include <iostream>
#include <cstring>

using namespace std;

int main() {

    string s;

    getline(cin, s);

    if(s.size() <= 140)
        cout << "TWEET" << endl;
    else
        cout << "MUTE" << endl;

}
