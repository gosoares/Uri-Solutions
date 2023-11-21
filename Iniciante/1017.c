#include <stdio.h>

int main() {

    int t, v;

    scanf("%d %d", &t, &v);

    float comb = (v*t)/12.0;

    printf("%.3f\n", comb);

    return 0;
}
