#include <iostream>
#include <cstdio>
 
using namespace std;
 
int main() {
 
    char a, b, c;
    cin >> a >> b >> c;

    printf("A = %c, B = %c, C = %c\n", a, b, c);
    printf("A = %c, B = %c, C = %c\n", b, c, a);
    printf("A = %c, B = %c, C = %c\n", c, a, b);
 
    return 0;
}