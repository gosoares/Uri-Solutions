#include <iostream>
#include <queue>

using namespace std;

int main(){

    int n;

    while(true){

        cin >> n;
        cin.ignore();

        if(n == 0)
            break;

        queue<int> cartas;

        for(int i = 1; i <= n; i++){
            cartas.push(i);
        }

        cout << "Discarded cards: ";
        while(cartas.size() > 2){
            cout << cartas.front() << ", ";
            cartas.pop();
            cartas.push(cartas.front());
            cartas.pop();
        }
        cout << cartas.front() << endl;
        cartas.pop();

        cout << "Remaining card: " << cartas.front() << endl;

    }

    return 0;
}
