#include <iostream>

using namespace std;

// returns true if s1 is better than s2
bool better(string s1, int p1, int k1, int m1, string s2, int p2, int k2,
            int m2) {
    if (p1 != p2) return p1 > p2;

    if (k1 != k2) return k1 > k2;

    if (m1 != m2) return m1 < m2;

    return s1.compare(s2) < 0;
}

int main() {
    int n, p, k, m, pBest = 0, kBest = 0, mBest = 101;

    string s, sBest;

    cin >> n;

    while (n--) {
        cin >> s >> p >> k >> m;

        if (better(s, p, k, m, sBest, pBest, kBest, mBest)) {
            sBest = s;
            pBest = p;
            kBest = k;
            mBest = m;
        }
    }

    cout << sBest << endl;

    return 0;
}