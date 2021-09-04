#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int t, i, e;
    int op[51][3];
    char r;

    string s;
    vector<string> nomes;

    while(cin >> t){

        for(i = 1; i <= t; i++){
            scanf("%d %d=%d\n", &op[i][0], &op[i][1], &op[i][2]);
        }

        nomes.clear();

        for(i = 0; i < t; i++){
            cin >> s >> e >> r;

            if(r == '+'){
                if(op[e][0] + op[e][1] != op[e][2]){
                    nomes.push_back(s);
                }
            }else if(r == '-'){
                if(op[e][0] - op[e][1] != op[e][2]){
                    nomes.push_back(s);
                }
            }else if(r == '*'){
                if(op[e][0] * op[e][1] != op[e][2]){
                    nomes.push_back(s);
                }
            }else{
                if(op[e][0] + op[e][1] == op[e][2] || op[e][0] - op[e][1] == op[e][2] || op[e][0] * op[e][1] == op[e][2]){
                    nomes.push_back(s);
                }
            }
        }

        if(nomes.size() == 0){
            cout << "You Shall All Pass!" << endl;
        }else if(nomes.size() == t){
            cout << "None Shall Pass!" << endl;
        }else{

            sort(nomes.begin(), nomes.end());
            for(i = 0; i < nomes.size()-1; i++){
                cout << nomes[i] << ' ';
            }
            cout << nomes[nomes.size()-1] << endl;
        }


    }

    return 0;
}
