#include <iostream>
#include <set>

using namespace std;

int main(){

    int t, n, x;

    set<int> elementos;

    cin >> t;

    while(t--){
        elementos.clear();

        cin >> n;

        while(n--){
            cin >> x;
            elementos.insert(x);
        }

        cout << elementos.size() << endl;

    }

    return 0;
}
