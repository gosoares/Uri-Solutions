#include <iostream>

using namespace std;

int main() {

    int c, p, r, g, b;
    char m, s;

    cin >> c;
    while(c--){
        r = 0, g = 0, b = 0;

        cin >> p;
        while(p--){
            cin >> m >> s;

            if(m == 'R'){
                if(s == 'G'){
                    r += 2;
                }else if(s == 'B'){
                    r++;
                }
            }else if(m == 'G'){
                if(s == 'R'){
                    g++;
                }else if(s == 'B'){
                    g += 2;
                }
            }else if(m == 'B'){
                if(s == 'R'){
                    b += 2;
                }else if(s == 'G'){
                    b++;
                }
            }

        }

        if(r == g && g == b){
            cout << "trempate" << endl;
        }else if((r == g && r > b) || (r == b && r > g) || (b == g && b > r)){
            cout << "empate" << endl;
        }else if(r > g && r > b){
            cout << "red" << endl;
        }else if(b > g){
            cout << "blue" << endl;
        }else{
            cout << "green" << endl;
        }

    }

    return 0;
}
