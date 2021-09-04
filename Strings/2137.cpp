#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    string s;
    vector<string> cods;

    while(cin >> n){
        cin.ignore();
        cods.clear();

        while(n--){
            cin >> s;
            cods.push_back(s);
        }

        sort(cods.begin(), cods.end());

        for(n = 0; n < cods.size(); n++)
            cout << cods[n] << endl;

    }

    return 0;
}
