#include <iostream>
#include <set>

using namespace std;

int main() {
 
    string name, option, winner = "";

    set<string> yes, no;
 
    while (true) {
        cin >> name;
        if (name == "FIM") break;
        cin >> option;

        if (option == "YES") {
            if(winner == "" || name.size() > winner.size())
                winner = name;
            
            yes.insert(name);
        } else {
            no.insert(name);
        }
    }

    for (const string& n : yes) {
        cout << n << endl;
    }

    for (const string& n : no) {
        cout << n << endl;
    }

    cout << endl << "Amigo do Habay:" << endl << winner << endl;

    return 0;
}