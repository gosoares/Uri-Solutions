#include <iostream>

using namespace std;

int main() {
	
	int n;
    cin >> n;

    while(n--) {
        int m;
        cin >> m;

        if(m == 1){
            cout << 1 << endl;
            continue;
        }

        int salario = 1 + m;

        for(int i = 2; i*i <= m; i++ ) {
            if(m % i == 0) {
                if(i != m/i)
                    salario += i + (m / i);
                else
                    salario += i;
            }
        }

        cout << salario << endl;
    }
	
	return 0;
}