#include <iostream>
#include <vector>
#include <numeric>
 
using namespace std;
 
int main() {
 
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;

        int k = 0;
        bool readingNumber = false;

        vector<int> values(3, 0);
        
        for (int i = 0; i < s.size(); i++) {
            if(s[i] >= '0' && s[i] <= '9') {
                readingNumber = true;
                values[k] = values[k] * 10 + (s[i] - '0');
            } else if(readingNumber) {
                readingNumber = false;
                k++;
            }
        }

        cout << accumulate(values.begin(), values.end(), 0) << endl;
    }
 
    return 0;
}