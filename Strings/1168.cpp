#include <iostream>

using namespace std;

int main() {

    int n, leds;
    cin >> n;

    string v;

    while(n--){
        cin >> v;

        leds = 0;
        for(int i = 0; i < v.size(); i++){
            if(v[i] == '0' || v[i] == '6' || v[i] == '9')
                leds += 6;
            else if(v[i] == '2' || v[i] == '3' || v[i] == '5')
                leds += 5;
            else if(v[i] == '4')
                leds += 4;
            else if(v[i] == '1')
                leds += 2;
            else if(v[i] == '7')
                leds += 3;
            else
                leds += 7;
        }

        cout << leds << " leds" << endl;

    }

    return 0;
}
