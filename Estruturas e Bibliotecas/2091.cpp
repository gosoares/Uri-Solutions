#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int n, x;

    while (cin >> n && n > 0) {
        unordered_set<int> numbers;

        while (n--) {
            cin >> x;

            if (numbers.erase(x) == 0) {
                numbers.insert(x);
            }
        }

        cout << *(numbers.begin()) << endl;
    }

    return 0;
}