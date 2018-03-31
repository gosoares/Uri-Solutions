#include <iostream>

using namespace std;

string musicas[] = {
    "PROXYCITY",
    "P.Y.N.G.",
    "DNSUEY!",
    "SERVERS",
    "HOST!",
    "CRIPTONIZE",
    "OFFLINE DAY",
    "SALT",
    "ANSWER!",
    "RAR?",
    "WIFI ANTENNAS"
};

int main() {

    int c, x, y;

    cin >> c;

    while(c--){
        cin >> x >> y;
        cout << musicas[x+y] << endl;
    }

    return 0;
}
