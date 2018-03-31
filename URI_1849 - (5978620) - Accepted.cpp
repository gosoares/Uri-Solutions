#include <iostream>

using namespace std;

int main() {

    int ld, cd, lv, cv;

    cin >> ld >> cd >> lv >> cv;

    int x = min(min(min(ld, cd) + min(lv, cv), max(ld, cd)), max(lv, cv));;

    cout << x*x << endl;

    return 0;
}
