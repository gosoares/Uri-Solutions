#include <cstdio>
#include <algorithm>

using namespace std;

int main(){

    int nc, n, h, alturas[231], maior;
    scanf("%d", &nc);

    for(int i = 20; i <= 230; i++)
        alturas[i] = 0;

    while(nc--){

        scanf("%d", &n);

        maior = 20;
        for(int i = 0; i < n; i++){
            scanf("%d", &h);
            alturas[h]++;

            if(h > maior)
                maior = h;
        }

        for(int i = 20; i < maior; i++){
            while(alturas[i] > 0){
                printf("%d ", i);
                alturas[i]--;
            }
        }

        while(alturas[maior] > 1){
            printf("%d ", maior);
            alturas[maior]--;
        }
        alturas[maior] = 0;
        printf("%d\n", maior);

    }

    return 0;
}
