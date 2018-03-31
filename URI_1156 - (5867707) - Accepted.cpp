#include <iostream>

using namespace std;

int main() {

    double s = 0;

    for(int i = 1, j = 1; i <= 39; i += 2, j *= 2)
        s += ((float) i) / j;

    cout.precision(2);

    cout << fixed << s << endl;

    return 0;
}
