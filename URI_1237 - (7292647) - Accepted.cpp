#include <iostream>
#include <string>

using namespace std;

int main(){

    string line1, line2;

    int maior;

    while(getline(cin, line1)){
        getline(cin, line2);

        maior = 0;
        for(int i = line1.size(); i >= 0; i--){

            for(int j = 0; j <= line1.size() - i ; j++){
                if(line2.find(line1.substr(j, i)) != string::npos){
                    maior = i;
                    break;
                }
            }

            if(maior > 0)
                break;

        }

        cout << maior << endl;

    }

    return 0;
}
