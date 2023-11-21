#include <iostream>
#include <vector>
#include <cmath>
#include <set>

using namespace std;

int main(){

    int n, b;

    while(cin >> n >> b){
        if(n == 0 && b == 0)
            break;

        vector<int> bolas(b);
        set<int> possivel;

        for(int i = 0; i < b; i++)
            cin >> bolas[i];

        possivel.insert(0);
        for(int i = 0; i < b; i++){
            for(int j = i + 1; j < b; j++){
                possivel.insert(abs(bolas[i] - bolas[j]));
            }
        }

        cout << (possivel.size() == n + 1 ? "Y" : "N") << endl;

    }

    return 0;
}
