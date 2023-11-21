#include <iostream>

using namespace std;

unsigned long int mdc(unsigned long int a, unsigned long int b){
    if(b == 0)
        return a;

    return mdc(b, a % b);
}

int main(){

    string line;
    unsigned long int n, s1, s2;

    cin >> n;
    cin.ignore();

    for(int caso = 1; caso <= n; caso++){
        getline(cin, line);

        s1 = 0, s2 = 0;

        for(int i = 0; i < line.size(); i++){
            s1 <<= 1;
            s1 += line[i] - '0';
        }

        getline(cin, line);

        for(int i = 0; i < line.size(); i++){
            s2 <<= 1;
            s2 += line[i] - '0';
        }

        cout << "Pair #" << caso << ": ";
        cout << (mdc(s1, s2) > 1 ? "All you need is love!" : "Love is not all you need!") << endl;

    }

}
