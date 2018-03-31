#include <iostream>

using namespace std;

int main(){

    string line;
    bool negrito, italico;

    while(getline(cin, line)){
        negrito = false;
        italico = false;

        for(int i = 0; i < line.size(); i++){

            if(line[i] == '_'){
                if(italico){
                    cout << "</i>";
                    italico = false;
                }else{
                    cout << "<i>";
                    italico = true;
                }
            }else if(line[i] == '*'){
                if(negrito){
                    cout << "</b>";
                    negrito = false;
                }else{
                    cout << "<b>";
                    negrito = true;
                }
            }else{
                cout << line[i];
            }

        }

        cout << endl;

    }

    return 0;
}
