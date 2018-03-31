#include <iostream>
#include <algorithm>

using namespace std;

bool sortDesc(int a, int b){
    return a > b;
}

int main() {

    int s;

    cin >> s;

    int q[s], n[s];

    for(int i = 0; i < s; i++)
        cin >> q[i];
    for(int i = 0; i < s; i++)
        cin >> n[i];

    sort(q, q + s, sortDesc);
    sort(n, n + s, sortDesc);

    int ganha = 0;
    for(int i = 0, a = 0; i < s; i++){
        if(q[i] < n[a]){
            ganha++;
            a++;
        }
    }

    cout << ganha << endl;

    return 0;
}
