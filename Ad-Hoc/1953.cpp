#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n, epr, ehd, intrusos;
    string matricula, curso;

    while(cin >> n){

        epr = 0, ehd = 0, intrusos = 0;

        while(n--){
            cin >> matricula >> curso;

            if(curso == "EPR"){
                epr++;
            }else if(curso == "EHD"){
                ehd++;
            }else{
                intrusos++;
            }

        }

        cout << "EPR: " << epr << endl;
        cout << "EHD: " << ehd << endl;
        cout << "INTRUSOS: " << intrusos << endl;

    }

	return 0;
}
