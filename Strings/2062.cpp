#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

	int n;
	string s;
	bool printSpace = false;
	cin >> n;

	while(n--){
        cin >> s;

        if(s.size() == 3 && ((s[0] == 'O' && s[1] == 'B') || (s[0] == 'U' && s[1] == 'R')))
            s[2] = 'I';


        if(printSpace)
            cout << " ";
        else
            printSpace = true;

        cout << s;
	}

	cout << endl;

	return 0;
}
