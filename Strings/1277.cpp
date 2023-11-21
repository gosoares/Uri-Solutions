#include <iostream>
#include <vector>

using namespace std;

int main(){

    int t, n, p, a;
    string registro;
    bool primeiro;
    cin >> t;

    while(t--){

        cin >> n;
        cin.ignore();

        vector<string> nomes(n);

        for(int i = 0; i < n; i++)
            cin >> nomes[i];

        primeiro = true;
        for(int i = 0; i < n; i++){
            cin >> registro;

            p = 0, a = 0;

            for(int j = 0; j < registro.size(); j++){
                if(registro[j] == 'P')
                    p++;
                else if(registro[j] == 'A')
                    a++;
            }

            if( ((double) p / (a + p)) < 0.75){
                if(primeiro){
                    primeiro = false;
                }else{
                    cout << " ";
                }

                cout << nomes[i];
            }
        }
        cout << endl;

    }

    return 0;
}
