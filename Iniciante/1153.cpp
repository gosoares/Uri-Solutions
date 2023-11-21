#include <iostream>

using namespace std;


unsigned long int fatorial(int n){
    if(n == 0)
        return 1;
    else
        return n * fatorial(n - 1);
}

int main() {

    int n;

    cin >> n;

    unsigned long int fat = fatorial(n);

    cout << fat << endl;

    return 0;
}
