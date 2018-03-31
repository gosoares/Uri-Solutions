#include <stdio.h>

int main() {

    int k;
    int n, m;
    int x, y;

    while(1){
        scanf("%d", &k);
        fflush(stdin);

        if(!k)
            break;

        scanf("%d %d", &n, &m);

        int i;
        for(i = 0; i < k; i++){
            scanf("%d %d", &x, &y);

            if(x > n && y > m)
                printf("NE\n");
            else if(x < n && y > m)
                printf("NO\n");
            else if(x < n && y < m)
                printf("SO\n");
            else if(x > n && y < m)
                printf("SE\n");
            else
                printf("divisa\n");

        }
    }

    return 0;
}
