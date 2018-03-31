#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

	int n, k, c, s, tempoAtual;
	bool possivel;

	stack<pair<int, int> > horarios;

	while (cin >> n >> k && n > 0) {

		possivel = true;
		while (n--) {
			cin >> c >> s;

            tempoAtual = 0;
			while (horarios.size() > 0 && c >= horarios.top().second) {
                possivel &= horarios.top().second >= tempoAtual;
                tempoAtual = horarios.top().second;
				horarios.pop();
			}

			possivel &= horarios.size() < k;

			horarios.push(pair<int, int>(c, s));

		}

        tempoAtual = 0;
		while (horarios.size() > 0) {
            possivel &= horarios.top().second >= tempoAtual;
            tempoAtual = horarios.top().second;
			horarios.pop();
		}

		cout << (possivel ? "Sim" : "Nao") << endl;

	}

	return 0;
}
