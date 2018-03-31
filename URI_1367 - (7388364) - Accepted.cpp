#include <iostream>

using namespace std;

int main(){

    int n, tempo, s, p;
    char id;
    string judge;

    bool correct['Z' - 'A' + 1];
    int tempoTotal['Z' - 'A' + 1];

    for(int i = 0; i <= 'Z' - 'A'; i++){
        correct[i] = false;
        tempoTotal[i] = 0;
    }

    while(cin >> n){
        if(n == 0)
            break;

        for(int i = 0; i < n; i++){
            cin >> id >> tempo >> judge;

            if(judge == "correct"){
                if(!correct[id-'A']){
                    correct[id-'A'] = true;
                    tempoTotal[id-'A'] += tempo;
                }
            }else{
                tempoTotal[id-'A'] += 20;
            }

        }

        s = 0, p = 0;
        for(int i = 0; i <= 'Z' - 'A'; i++){
            if(correct[i]){
                s++;
                p += tempoTotal[i];
                correct[i] = false;
            }
            tempoTotal[i] = 0;
        }

        cout << s << " " << p << endl;

    }

    return 0;
}
