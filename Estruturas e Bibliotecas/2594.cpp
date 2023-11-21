#include <iostream>
#include <vector>

using namespace std;

int main() {
    string line, word;
    int q;
    cin >> q;
    cin.ignore();

    while (q--) {
        getline(cin, line);
        getline(cin, word);

        bool printSpace = false;

        unsigned long pos = -1;
        do {
            bool equal = true;
            for (int i = 0; i < word.size(); i++, pos++) {
                if (word[i] != line[pos]) {
                    equal = false;
                    pos++;
                    break;
                }
            }

            if (equal) {
                if (printSpace)
                    cout << ' ';
                else
                    printSpace = true;

                cout << (pos - word.size());
            }
            pos = line.find(' ', pos) + 1;
        } while (pos != string::npos + 1 && pos + word.size() <= line.size());

        cout << '\n';
    }

    return 0;
}