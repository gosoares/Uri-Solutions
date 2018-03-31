#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n, d, x;
    bool b;


    while(cin >> n >> d){
        if(n == 0 && d == 0)
            break;

        vector<int> a(n, 0);

        for(int i = 0; i < d; i++){
            for(int j = 0; j < n; j++){
                cin >> x;
                a[j] += x;
            }
        }

        b = false;
        for(int i = 0; i < n; i++){
            if(a[i] == d){
                b = true;
                break;
            }
        }

        if(b){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }

    }

    return 0;
}
