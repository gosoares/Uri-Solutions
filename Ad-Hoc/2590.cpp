#include <cstdio>
 
using namespace std;
 
int main() {
 
    int t, n, r;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        int mod4 = n & 3; // 0011

        if (mod4 == 0)
            printf("1\n");
        else if (mod4 == 1) 
            printf("7\n");
        else if (mod4 == 2)
            printf("9\n");
        else
            printf("3\n");
    }
 
    return 0;
}