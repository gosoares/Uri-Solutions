#include <iostream>
#include <set>

using namespace std;

int main(){

    string dieta, cafe, almoco;
    int n;
    bool cheater;
    set<char>::iterator it;
    cin >> n;
    cin.ignore();

    while(n--){
        getline(cin, dieta);
        getline(cin, cafe);
        getline(cin, almoco);

        cafe.append(almoco);

        set<char> janta;

        for(int i = 0; i < dieta.size(); i++){
            janta.insert(dieta[i]);
        }

        cheater = false;
        for(int i = 0; i < cafe.size(); i++){
            it = janta.find(cafe[i]);
            if(it == janta.end()){
                cheater = true;
                break;
            }else{
                janta.erase(it);
            }
        }

        if(cheater){
            cout << "CHEATER" << endl;
        }else{

            for(it = janta.begin(); it != janta.end(); it++)
                cout << *it;

            cout << endl;

        }

    }

    return 0;
}
