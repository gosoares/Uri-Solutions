#include <iostream>

using namespace std;

int main() {

    int n, kg, kgTotal = 0;
    double v, vTotal = 0;
    string line;

    cout << fixed;
    cout.precision(2);

    cin >> n;

    for(int d = 1; d <= n; d++){
        cin >> v;
        cin.ignore();
        vTotal += v;

        getline(cin, line);
        kg = 1;
        for(int i = 0; i < line.size(); i++)
            if(line[i] == ' ')
                kg++;

        kgTotal += kg;

        cout << "day " << d << ": " << kg << " kg" << endl;

    }

    cout << (double) kgTotal / n << " kg by day" << endl;
    cout << "R$ " << vTotal / n << " by day" << endl;

    return 0;
}
