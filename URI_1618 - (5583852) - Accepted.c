#include <stdio.h>

int main() {

    int n, ax, ay, bx, by, cx, cy, dx, dy, rx, ry, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d %d %d %d %d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy, &rx, &ry);

        if(rx >= ax && rx <= cx && ry >= ay && ry <= cy){
            printf("1\n");
        }else{
            printf("0\n");
        }

    }


    return 0;
}
