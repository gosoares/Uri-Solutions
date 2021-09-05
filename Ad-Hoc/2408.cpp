#include <iostream>
 
using namespace std;
 
int main() {
 
    int a, b, c;

    cin >> a >> b >> c;

    if (a > c)
        swap(a, c);
    if (a > b)
        swap(b, a);
    if (b > c)
        swap(b, c);

    cout << b << endl;
 
    return 0;
}