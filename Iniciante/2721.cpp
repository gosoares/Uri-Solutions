#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
 
    vector<string> renas = {"Rudolph", "Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen"};
    
    int a, sum = 0;
    
    for(int i = 0; i < renas.size(); i++) {
        cin >> a;
        sum += a;
    }

    cout << renas[sum % renas.size()] << endl;

    return 0;
}