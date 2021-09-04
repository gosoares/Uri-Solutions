#include <iostream>

using namespace std;

int mdc(int a, int b){
    if(b == 0)
        return a;

    return mdc(b, a%b);

}

int main() {

    int a, b, c;

    while(cin >> a >> b >> c){

        cout << "tripla";

        if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b){
            cout << " pitagorica";

            if(mdc(a, b) == 1 && mdc(b, c) == 1 && mdc(a, c) == 1)
                cout << " primitiva";

        }

        cout << endl;

    }

    return 0;
}
