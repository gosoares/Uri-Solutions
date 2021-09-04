#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    int n, pt1, pt2, gols[2][2];
    char x;

    cin >> n;

    while(n--){
        pt1 = 0, pt2 = 0;

        cin >> gols[0][0] >> x >> gols[0][1];
        cin >> gols[1][0] >> x >> gols[1][1];

        if(gols[0][0] > gols[0][1])
            pt1 += 3;
        else if(gols[0][0] < gols[0][1])
            pt2 += 3;
        else{
            pt1++;
            pt2++;
        }

        if(gols[1][0] > gols[1][1])
            pt2 += 3;
        else if(gols[1][0] < gols[1][1])
            pt1 += 3;
        else{
            pt1++;
            pt2++;
        }

        if(pt1 > pt2){
            cout << "Time 1";
        }else if(pt2 > pt1){
            cout << "Time 2";
        }else{
            if(gols[0][0] + gols[1][1] > gols[0][1] + gols[1][0]){
                cout << "Time 1";
            }else if(gols[0][0] + gols[1][1] < gols[0][1] + gols[1][0]){
                cout << "Time 2";
            }else{
                if(gols[1][1] > gols[0][1]){
                    cout << "Time 1";
                }else if(gols[1][1] < gols[0][1]){
                    cout << "Time 2";
                }else{
                    cout << "Penaltis";
                }
            }
        }

        cout << endl;

    }

    return 0;
}
