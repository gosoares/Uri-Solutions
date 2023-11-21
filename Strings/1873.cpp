#include <iostream>

using namespace std;

int main(){

    int c;
    cin >> c;
    cin.ignore();

    string rajesh, sheldon;

    while(c--){
        cin >> rajesh >> sheldon;

        if(rajesh == sheldon){
            cout << "empate" << endl;
        }else{
            if(
               (rajesh == "tesoura" && (sheldon == "papel" || sheldon == "lagarto")) ||
               (rajesh == "papel" && (sheldon == "pedra" || sheldon == "spock")) ||
               (rajesh == "pedra" && (sheldon == "lagarto" || sheldon == "tesoura")) ||
               (rajesh == "lagarto" && (sheldon == "spock" || sheldon == "papel")) ||
               (rajesh == "spock" && (sheldon == "tesoura" || sheldon == "pedra"))
               )
                cout << "rajesh" << endl;
            else
                cout << "sheldon" << endl;

        }

    }

    return 0;
}
