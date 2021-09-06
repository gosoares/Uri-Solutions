#include <iostream>
#include <unordered_map>
 
using namespace std;
 
int main() {
 
    int n, m;
    cin >> n;
    cin.ignore();

    string language, translation, name;
    unordered_map<string, string> translations;

    while (n--) {
        getline(cin, language);
        getline(cin, translation);
        translations[language] = translation;
    }

    cin >> m;
    cin.ignore();

    while (m--) {
        getline(cin, name);
        getline(cin, language);

        cout << name << endl;
        cout << translations[language] << endl << endl;
    }
 
    return 0;
}