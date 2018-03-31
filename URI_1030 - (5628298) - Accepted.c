#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int id;
    struct Node *next;
} Node;

int main(){
    int nc, i, n, k, j;

    scanf("%d", &nc);

    for(i = 1; i <= nc; i++){

        scanf("%d %d", &n, &k);

        Node *inicio = malloc(sizeof(Node));
        inicio->id = 1;

        Node *m = inicio;

        // construir lista encadeada circular
        for(j = 2; j <= n;  j++){
            m->next = malloc(sizeof(Node));
            m = m->next;
            m->id = j;
        }
        m->next = inicio;

        while(m != m->next){
            for(j = 1; j < k; j++) // vai para o elemento anterior ao que tem que tirar
                m = m->next;

            Node *r = m->next;
            m->next = r->next;
            free(r);
        }

        printf("Case %d: %d\n", i, m->id);
        free(m);

    }

    return 0;
}
