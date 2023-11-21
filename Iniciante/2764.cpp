#include <iostream>
#include <cstdio>
 
using namespace std;
 
int main() {
 
    int d, m, a;

    scanf("%d/%d/%d", &d, &m, &a);

    printf("%02d/%02d/%02d\n", m, d, a);
    printf("%02d/%02d/%02d\n", a, m, d);
    printf("%02d-%02d-%02d\n", d, m, a);
 
    return 0;
}