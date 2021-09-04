#include <iostream>

using namespace std;

int main() {

    unsigned long long int n1, n2, carrys;
    int carry;

    while(cin >> n1 >> n2){
        if(n1 == 0 && n2 == 0)
            break;

        carry = 0, carrys = 0;
        while(n1 > 0 || n2 > 0){
            if((n1%10)+(n2%10)+carry >= 10){
                carrys++;
                carry = 1;
            }else{
                carry = 0;
            }
            n1 /= 10;
            n2 /= 10;
        }

        if(carrys == 0)
            cout << "No carry operation." << endl;
        else if(carrys == 1)
            cout << "1 carry operation." << endl;
        else
            cout << carrys << " carry operations." << endl;

    }

    return 0;
}
