#include <iostream>

using namespace std;

int main() {

    int peoples, dates, canGo;
    string date, result;
    bool possible;

    while(cin >> peoples >> dates){

        result.clear();

        while(dates--){
            cin >> date;

            possible = true;
            for(int i = 0; i < peoples; i++){
                cin >> canGo;
                if(canGo == 0)
                    possible = false;
            }

            if(possible && result.empty())
                result = date;

        }

        cout << (result.empty() ? "Pizza antes de FdI" : result) << endl;

    }

    return 0;
}
