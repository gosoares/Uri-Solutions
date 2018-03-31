#include <iostream>
#include <cstring>

using namespace std;

int main() {

    int t;

    string sheldon;
    string raj;

    cin >> t;
    cin.ignore();

    for(int i = 1; i <= t; i++){
        cin >> sheldon >> raj;

        cout << "Caso #" << i << ": ";
        if((sheldon == "tesoura" && raj == "papel") || (sheldon == "papel" && raj == "pedra") || (sheldon == "pedra" && raj == "lagarto")  || (sheldon == "lagarto" && raj == "Spock")
           || (sheldon == "Spock" && raj == "tesoura") || (sheldon == "tesoura" && raj == "lagarto") || (sheldon == "lagarto" && raj == "papel") || (sheldon == "papel" && raj == "Spock")
           || (sheldon == "Spock" && raj == "pedra") || (sheldon == "pedra" && raj == "tesoura"))
             cout << "Bazinga!" << endl;
        else if(sheldon == raj)
            cout << "De novo!" << endl;
        else
            cout << "Raj trapaceou!" << endl;

    }

    return 0;
}
