#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

    vector<vector<int> > m(5);

    int s, k, t = 1;

    for(auto &c : m){
        cin >> s;
        t *= s;
        c.resize(s);
        for(auto &e : c)
            cin >> e;
    }

    cin >> k;

    vector<int> valores(t);
    t = 0;

    for(auto &l1 : m[0])
        for(auto &l2 : m[1])
            for(auto &l3 : m[2])
                for(auto &l4 : m[3])
                    for(auto &l5 : m[4])
                        valores[t++] = l1 + l2 + l3 + l4 + l5;

    sort(valores.rbegin(), valores.rend());

    int sum = 0;
    for(int i = 0; i < k; i++)
        sum += valores[i];

    cout << sum << endl;

	return 0;
}
