#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int v;
    struct Node *next;
} Node;


// CASO DE TESTE DANDO ERRADO: 14

int main() {

    Node *nodes[101];

    int i, j;
    for(i = 1; i <= 100; i++){
        Node *n = malloc(sizeof(struct Node));
        n->v = i;
        nodes[i] = n;
    }

    int n;
    while(1){
        scanf("%d", &n);
        if(n == 0)
            break;

        for(i = 1;; i++){

            //organiza lista circular
            for(j = 1; j < n; j++){
                nodes[j]->next = nodes[j+1];
            }
            nodes[n]->next = nodes[1];

            Node *no = nodes[n];

            // vai removendo os postes da lista
            while(no->next != no && no->next->v != 13){

                // remove prox elemento da lista
                no->next = no->next->next;

                // pula i elementos
                for(j = 1; j < i; j++)
                    no = no->next;

            }

            if(no == no->next && no->v == 13){
                printf("%d\n", i);
                break;
            }

        }

    }
    return 0;
}
