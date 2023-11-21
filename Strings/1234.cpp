#include <iostream>

using namespace std;

int main() {

    int i;
    string line;
    bool upCase;

    while(getline(cin, line)){
        upCase = true;
        for(i = 0; i < line.size(); i++){
            if(line[i] == ' ')
                continue;

            if(upCase){
                if(line[i] >= 'a' && line[i] <= 'z')
                    line[i] -= 32;
                upCase = false;
            }else{
                if(line[i] >= 'A' && line[i] <= 'Z')
                    line[i] += 32;
                upCase = true;
            }
        }

        cout << line << endl;
    }

    return 0;
}
