#include <iostream>
#include <unordered_set>
#include <map>
 
using namespace std;
 
int main() {
 
    unordered_set<string> dead;
    map<string, int> murderCount;

    string murderer, murdered;
 
    while (cin >> murderer >> murdered) {
        dead.insert(murdered);
        murderCount.erase(murdered);

        if (dead.find(murderer) == dead.end()) {
            murderCount[murderer]++;
        }
    }

    cout << "HALL OF MURDERERS" << endl;
    for (const auto& x: murderCount) {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}