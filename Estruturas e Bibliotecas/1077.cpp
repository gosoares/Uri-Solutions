#include <iostream>
#include <stack>
#include <unordered_map>
 
using namespace std;
 
bool isOpetarion(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

unordered_map<char, int> priority = {
    {'+', 1}, {'-', 1}, {'*', 2}, {'/', 2}, {'^', 3}
};

int main() {

    string s;
    stack<char> op;

    int n;
    cin >> n;

    while (n--) {
        cin >> s;

        for (const char& c : s) {
            if (isalnum(c)) {
                cout << c;
            } else if (c == '(') {
                op.push(c); // insert (
            } else if (c == ')') {
                while(op.top() != '(') { // print operations inside ()
                    cout << op.top();
                    op.pop();
                }
                op.pop(); // remove (
            } else { // operation
                // print previous operations if current operation has lower priority
                while(!op.empty() && op.top() != '(' && priority[op.top()] >= priority[c]) {
                    cout << op.top();
                    op.pop();
                }
                op.push(c); // insert operation
            }
        }

        while (!op.empty()) { // print remaining operations
            cout << op.top();
            op.pop();
        }

        cout << endl;
    }
 
    return 0;
}