#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

	int n, m, a, b;

	while(cin >> n >> m && n > 0){

        char desenho[n][m];

        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                cin >> desenho[i][j];

        cin >> a >> b;

        a /= n;
        b /= m;

        for(int lin = 0; lin < n; lin++){
            for(int qtdLin = 0; qtdLin < a; qtdLin++){
                for(int col = 0; col < m; col++){
                    for(int qtdCol = 0; qtdCol < b; qtdCol++){
                        cout << desenho[lin][col];
                    }
                }
                cout << endl;
            }
        }

        cout << endl;

	}

	return 0;
}
