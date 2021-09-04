#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {

    unsigned long int n, t, i, segundos;
    double d;
    string tempo;
    bool desc;

    cin >> n >> d;

    while(cin >> t){
        cin.ignore();

        segundos = 0;
        desc = false;
        for(i = 0; i < n; i++){
            cin >> tempo;

            if(tempo[0] == '-' || desc){
                desc = true;
                continue;
            }

            segundos += (tempo[0] - '0') * 3600 + (tempo[2] - '0') * 600 + (tempo[3] - '0') * 60 + (tempo[5] - '0') * 10 + (tempo[6] - '0');
        }

        printf("%3d: ", t);

        if(desc){
            cout << "-";
        }else{
            segundos = round(segundos / d);

            printf("%d:%02d min/km", segundos/60, segundos%60);

        }

        cout << endl;


    }

    return 0;
}
