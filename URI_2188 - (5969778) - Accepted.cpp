#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

typedef struct Quadrado{
    int x1;
    int y1;
    int x2;
    int y2;
}Quadrado;

Quadrado* intercessao(Quadrado *q1, Quadrado *q2){

    if(q1->x1 > q2->x2 || q1->x2 < q2->x1 || q1->y1 > q2->y2 || q1->y2 < q2->y1){ // nao tem intercessao
        return NULL;
    }


    Quadrado *q = (Quadrado *) malloc(sizeof(struct Quadrado));
    q->x1 = max(q1->x1, q2->x1);
    q->y1 = max(q1->y1, q2->y1);
    q->x2 = min(q1->x2, q2->x2);
    q->y2 = min(q1->y2, q2->y2);

    return q;

}

int main(){

    int n, x1, y1, x2, y2, c = 0;
    vector<Quadrado *> qs;

    while(true){
        c++;

        cin >> n;
        if(n == 0)
            break;

        while(n--){
            cin >> x1 >> y2 >> x2 >> y1;
            Quadrado *q = (Quadrado *) malloc(sizeof(struct Quadrado));
            q->x1 = x1;
            q->y1 = y1;
            q->x2 = x2;
            q->y2 = y2;
            qs.push_back(q);
        }

        Quadrado *q = qs[0];

        for(int i = 1; i < qs.size(); i++){
            q = intercessao(q, qs[i]);
            if(q == NULL){
                break;
            }
        }

        cout << "Teste " << c << endl;
        if(q == NULL)
            cout << "nenhum" << endl;
        else
            cout << q->x1 << " " << q->y2 << " " << q->x2 << " " << q->y1 << endl;

        cout << endl;

        for(int i = 0; i < qs.size(); i++)
            free(qs[i]);
        qs.clear();
    }

    return 0;
}
