#include <cstdio>
 
using namespace std;
 
char image[1050][1050];
int n, m;

void paint(int x, int y) {
    if (image[x][y] != '.')
        return;
        
    image[x][y] = 'x'; // mark as painted

    // paint adjacent pixels
    if (x > 0) paint(x - 1, y);
    if (y > 0) paint(x, y - 1);
    if (x < n - 1) paint(x + 1, y);
    if (y < m - 1) paint(x, y + 1);
}

int paintColors() {
    int colors = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (image[i][j] == '.') {
                paint(i, j);
                colors++;
            }
        }
    }

    return colors;
}


int main() {
 
    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < n; i++)
        scanf("%s", image[i]);

    printf("%d\n", paintColors());
 
    return 0;
}