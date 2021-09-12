#include <iostream>
#include <vector>
#include <unordered_map>
 
using namespace std;
 
const vector<pair<char, string> > morseLetters({
    {'a', ".-"},
    {'b', "-..."},
    {'c', "-.-."},
    {'d', "-.."},
    {'e', "."},
    {'f', "..-."},
    {'g', "--."},
    {'h', "...."},
    {'i', ".."},
    {'j', ".---"},
    {'k', "-.-"},
    {'l', ".-.."},
    {'m', "--"},
    {'n', "-."},
    {'o', "---"},
    {'p', ".--."},
    {'q', "--.-"},
    {'r', ".-."},
    {'s', "..."},
    {'t', "-"},
    {'u', "..-"},
    {'v', "...-"},
    {'w', ".--"},
    {'x', "-..-"},
    {'y', "-.--"},
    {'z', "--.."}
});

int main() {
 
    unordered_map<string, char> translator;

    string buffer, word, symbol;
    buffer.reserve(100);

    for (const auto& ml : morseLetters) {
        const auto& code = ml.second;
        buffer = "=";
        if (code[0] == '-')
            buffer = "===";

        for (int i = 1; i < code.size(); i++) {
            if (code[i] == '.')
                buffer += ".=";
            else 
                buffer += ".===";
        }

        translator[buffer] = ml.first;
    }

    int t;
    cin >> t;

    while (t--) {
        cin >> buffer;

        int wordStart = 0, wordEnd = 0;
        bool printSpace = false;

        while (wordEnd != string::npos) {
            if (printSpace) cout << ' ';
            else printSpace = true;

            wordEnd = buffer.find(".......", wordStart);
            word = buffer.substr(wordStart, wordEnd - wordStart);

            int symbolStart = 0, symbolEnd = 0;

            while (symbolEnd != string::npos) {
                symbolEnd = word.find("...", symbolStart);
                symbol = word.substr(symbolStart, symbolEnd - symbolStart);

                cout << translator[symbol];

                symbolStart = symbolEnd + 3;
            }

            wordStart = wordEnd + 7;
        }

        cout << '\n';
    }
 
    return 0;
}