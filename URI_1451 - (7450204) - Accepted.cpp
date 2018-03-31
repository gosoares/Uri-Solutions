#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

	string line;
	deque<char> texto;
	deque<char>::iterator it;

	while(getline(cin, line)){

        it = texto.end();

        for(auto &c : line){
            if(c == '[')
                it = texto.end();
            else if(c == ']')
                it = texto.begin();
            else{
                it = texto.insert(it, c);
            }
        }

        while(!texto.empty()){
            cout << texto.back();
            texto.pop_back();
        }

        cout << endl;

	}

	return 0;
}
