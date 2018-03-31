#include <iostream>
#include <stdlib.h>

using namespace std;

bool ehTriangulo(int a, int b, int c){
    return  (a + b > c && a + c > b && b + c > a);
}

int main() {

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if(ehTriangulo(a, b, c) || ehTriangulo(a, b, d) || ehTriangulo(a, c, d) || ehTriangulo(b, c, d))
        cout << 'S' << endl;
    else
        cout << 'N' << endl;

    return 0;
}
