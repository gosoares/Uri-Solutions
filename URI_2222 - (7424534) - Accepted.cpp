#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

int main() {

    int testCases, qtdSets, qtdElements, querys, op, set1, set2;
    unsigned long long int one, element;
    cin >> testCases;

    while(testCases--){

        cin >> qtdSets;

        bitset<64> bset[qtdSets+1];

        for(int actualSet = 1; actualSet <= qtdSets; actualSet++){
            cin >> qtdElements;

            for(int i = 1; i <= qtdElements; i++){
                cin >> element;

                bset[actualSet].set(element);

            }
        }

        cin >> querys;

        while(querys--){
            cin >> op >> set1 >> set2;

            if(op == 1)
                cout << (bset[set1] & bset[set2]).count() << endl;
            else
                cout << (bset[set1] | bset[set2]).count() << endl;
        }

    }

    return 0;
}