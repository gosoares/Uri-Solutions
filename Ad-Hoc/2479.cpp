#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
 
    int n;
    cin >> n;

    int b = 0, m = 0;
    char c;
    string s;
    vector<string> nomes;

    for(int i = 0; i < n; i++) {
        cin >> c >> s;

        nomes.push_back(s);
        if(c == '+') b++;
        else m++;
    }

    sort(nomes.begin(), nomes.end());
    for(string& nome : nomes) {
        cout << nome << endl;
    }
    cout << "Se comportaram: " << b << " | Nao se comportaram: " << m << endl;
 
    return 0;
}