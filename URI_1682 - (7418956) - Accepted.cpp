#include <iostream>
#include <vector>

using namespace std;

bool igual(vector<char> &code, int a, int b, int tam){

    while(tam--){
        if(code[a++] != code[b++])
            return false;
    }

    return true;

}

int main() {

    vector<char> code(5010, 'N');

    for(int i = 1; i < 5010; i++){
        for(int j = 1; j <= (i+1) / 2; j++){
            if(code[i] > 'P'){
                code[i] = 'N';
                code[i-1]++;
                i-=2;
                break;
            }

            if(igual(code, i - j + 1, i - 2*j + 1, j)){
                code[i]++;
                j = 0;
                continue;
            }
        }

    }

    int n;

    while(cin >> n && n > 0){
        for(int i = 0; i < n; i++){
            cout << code[i];
        }
        cout << endl;
    }

    return 0;
}
