#include <iostream>
#include <cstdio>
 
using namespace std;
 
int main() {
 
    int n, p, q, r;
    char c;

    scanf("%d\n%d %c %d", &n, &p, &c, &q);

    if (c == '+') 
        r = p + q;
    else // if c == *
        r = p * q;

    cout << ((r > n) ? "OVERFLOW" : "OK") << endl;
 
    return 0;
}