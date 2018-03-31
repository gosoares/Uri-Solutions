#include <iostream>

using namespace std;

int main() {

    int n, k;
    string s1, s2;
    bool nativo;

    cin >> n;

    while(n--){
        cin >> k;
        cin.ignore();

        getline(cin, s1);

        nativo = true;

        for(int i = 1; i < k; i++){
            getline(cin, s2);

            if(s1 != s2)
                nativo = false;
        }

        if(nativo)
            cout << s1 << endl;
        else
            cout << "ingles" << endl;

    }

    return 0;
}
