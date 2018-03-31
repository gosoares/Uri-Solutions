#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
	
	int n;
	
	cin >> n;
	
	string pokemon;
	unordered_set<string> pokemons;
	
	while(n--){
		cin >> pokemon;
		
		pokemons.insert(pokemon);
	}
	
	cout << "Falta(m) " << 151 - pokemons.size() <<  " pomekon(s)." << endl;
	
	return 0;
}