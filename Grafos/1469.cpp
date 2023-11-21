#include <cstdio>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

struct Employee {
    int age;

    unordered_set<int>* managers = new unordered_set<int>();
};

int dfsMinSearchRec(const vector<Employee>& employees, vector<bool>& visited, int e) {
    if (employees[e].managers->empty() || visited[e])
        return 200;
    visited[e] = true;

    int younger = 200;

    for (int m : *(employees[e].managers)) {
        younger = min({younger, employees[m].age, dfsMinSearchRec(employees, visited, m)});
    }

    return younger;
}

int dfsMinSearch(const vector<Employee>& employees, int e) {
    vector<bool> visited(employees.size(), false);
    return dfsMinSearchRec(employees, visited, e);
}

int main() {

    int n, m, c, x, y;
    char inst;

    while (scanf("%d %d %d", &n, &m, &c) != EOF) {
        vector<Employee> employees(n);

        for (auto& e : employees) scanf("%d", &(e.age));

        for (int i = 0; i < m; i++) {
            scanf("%d %d", &x, &y);
            employees[y-1].managers->insert(x-1);
        }

        for (int i = 0; i < c; i++) {
            getchar();
            scanf("%c %d", &inst, &x);
            x--;

            if (inst == 'T') {
                scanf("%d", &y);
                y--;

                for (int e = 0; e < employees.size(); e++) {
                    bool insertY = false;
                    if (employees[e].managers->erase(x) > 0) {
                        insertY = true;
                    }

                    if (employees[e].managers->erase(y) > 0) {
                        employees[e].managers->insert(x);
                    }

                    if (insertY) {
                        employees[e].managers->insert(y);
                    }
                }

                swap(employees[x].managers, employees[y].managers);

            } else { // inst = 'P'
                if (employees[x].managers->empty())
                    printf("*\n");
                else
                    printf("%d\n", dfsMinSearch(employees, x));
            }
        }
    }

    return 0;
}