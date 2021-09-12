#include <iostream>
#include <stack>
#include <unordered_map>
 
using namespace std;
 
static const unordered_map<char, char> connect({
    {'B', 'S'},
    {'S', 'B'},
    {'C', 'F'},
    {'F', 'C'}
});

int main() {
    
    string s;

    while (cin >> s) {
        stack<char> bases;
        int connections = 0;

        for (const char& c : s) {
            if (!bases.empty() && bases.top() == connect.at(c)) {
                connections++;
                bases.pop();
            } else {
                bases.push(c);
            }
        }

        cout << connections << endl;
    }
 
    return 0;
}