#include <iostream>
#include <cstdio>
 
using namespace std;
 
int main() {
 
    char lines[3][101];

    for(int i = 0; i < 3; i++)
        cin.getline(lines[i], 100);
    
    printf("%s%s%s\n", lines[0], lines[1], lines[2]);
    printf("%s%s%s\n", lines[1], lines[2], lines[0]);
    printf("%s%s%s\n", lines[2], lines[0], lines[1]);
    printf("%.10s%.10s%.10s\n", lines[0], lines[1], lines[2]);
 
    return 0;
}