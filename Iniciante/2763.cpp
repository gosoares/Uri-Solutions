#include <iostream>
#include <cstdio>
 
using namespace std;
 
int main() {
 
    int x, y, z, d;

    scanf("%d.%d.%d-%d", &x, &y, &z, &d);

    printf("%03d\n", x);
    printf("%03d\n", y);
    printf("%03d\n", z);
    printf("%02d\n", d);
 
    return 0;
}