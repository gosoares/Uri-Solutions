#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

bool ord(string s1, string s2){
    return s1.size() > s2.size();
}

int main() {

    int n;
    string line, s;
    vector<string> words;

    cin >> n;
    cin.ignore();

    while(n--){
        getline(cin, line);
        istringstream ss(line);

        words.clear();

        while(getline(ss, s, ' ')){
            words.push_back(s);
        }

        stable_sort(words.begin(), words.end(), ord);

        for(int i = 0; i < words.size(); i++){
            cout << words[i];
            if(i < words.size()-1)
                cout << ' ';
        }

        cout << endl;

    }

    return 0;
}
