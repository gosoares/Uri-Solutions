#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

    int h, m;

    while(scanf("%d:%d", &h, &m) != EOF)
        cout << "Atraso maximo: " << max((h - 7)*60 + m, 0) << endl;

    return 0;
}
