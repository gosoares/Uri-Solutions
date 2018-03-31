#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n, i, m;
    string s1;
    string s2;

    cin >> n;

    while(n--){
        cin >> s1 >> s2;

        m = min(s1.size(), s2.size());

        for(i = 0; i < m; i++)
            cout << s1[i] << s2[i];

        if(s2.size() > m)
            s1 = s2;

        m = s1.size();

        for(;i < m; i++)
            cout << s1[i];

        cout << endl;


    }

    return 0;
}
