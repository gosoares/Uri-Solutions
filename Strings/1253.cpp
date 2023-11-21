#include <stdio.h>

int main() {

    int n, d, i, j;
    char string[51];

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%s", string);
        scanf("%d", &d);

        for(j = 0; string[j] != '\0'; j++){
            string[j] = string[j] - d;
            while(string[j] < 'A')
                string[j] = 91 - ('A' - string[j]);
        }
        printf("%s\n", string);
    }


    return 0;
}
