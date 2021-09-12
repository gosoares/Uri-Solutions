#include <algorithm>
#include <cstdio>
#include <stack>

using namespace std;

int main() {
    int n, x, m;
    scanf("%d", &n);
    char op[10];

    stack<int> stk;

    while (n--) {
        scanf("%s", op);

        if (op == "PUSH") {
            scanf("%d", &x);

            m = x;
            if (!stk.empty()) m = min(m, stk.top());

            stk.push(m);
        } else if (stk.empty()) {
            printf("EMPTY\n");
        } else if (op == "POP") {
            stk.pop();
        } else {
            printf("%d\n", stk.pop());
        }
    }

    return 0;
}