#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<vector<int> > parede(9);

    for(int i = 0; i < 9; i++){
        parede[i].resize(i+1);
    }

    int n;
    cin >> n;

    while(n--){
        for(int i = 0; i < 9; i += 2){
            for(int j = 0; j < parede[i].size(); j += 2){
                cin >> parede[i][j];
            }
        }

        for(int i = 2; i < 9; i += 2){
            for(int j = 1; j < parede[i].size(); j += 2){
                parede[i][j] = (parede[i-2][j-1] - parede[i][j-1] - parede[i][j+1]) / 2;
            }
        }

        for(int i = 1; i < 9; i += 2){
            for(int j = 0; j < parede[i].size(); j++){
                parede[i][j] = parede[i+1][j] + parede[i+1][j+1];
            }
        }

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < parede[i].size() - 1; j++){
                cout << parede[i][j] << " ";
            }
            cout << parede[i][parede[i].size() - 1] << endl;
        }

    }


    return 0;
}
