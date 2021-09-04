#include <stdio.h>
#include <math.h>

int mdc(int a, int b){
    if(b == 0)
        return abs(a);
    else
        return mdc(b, a%b);
}

int main() {

    int n;

    scanf("%d", &n);

    int n1, d1, n2, d2;
    char op;

    int i;
    for(i = 0; i < n; i++){
        scanf("%d / %d %c %d / %d", &n1, &d1, &op, &n2, &d2);

        int nr, dr;

        if(op == '+'){
            nr = n1*d2 + n2*d1;
            dr = d1*d2;
        }else if(op == '-'){
            nr = n1*d2 - n2*d1;
            dr = d1*d2;
        }else if(op == '*'){
            nr = n1*n2;
            dr = d1*d2;
        }else if(op == '/'){
            nr = n1*d2;
            dr = n2*d1;
        }

        int md = mdc(nr, dr);

        printf("%d/%d = %d/%d\n", nr, dr, nr/md, dr/md);
    }

    return 0;
}
