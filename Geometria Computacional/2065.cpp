#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Employee {
    int id;
    int speed;
    int releaseTime;

    Employee(int id, int speed, int releaseTime) : id(id), speed(speed), releaseTime(releaseTime) {}

    struct Comparator {
        bool operator()(const Employee& a, const Employee& b) const {
            if (a.releaseTime != b.releaseTime)
                return a.releaseTime > b.releaseTime;

            return a.id > b.id;
        }
    };
};

int main() {

    int n, m, v, c;
    cin >> n >> m;

    priority_queue<Employee, vector<Employee>, Employee::Comparator> employees;
    for (int i = 0; i < n; i++) {
        cin >> v;
        employees.emplace(i, v, 0);
    }

    for (int i = 0; i < m; i++) {
        cin >> c;
        auto employee = employees.top(); // employee who will serve current customer
        employees.pop();
        employee.releaseTime += c * employee.speed; // at which time the employee will finish serving the customer
        employees.push(employee);
    }

    int time = 0;
    while (!employees.empty()) { // get the time of the last released employee after serving all customers
        time = employees.top().releaseTime;
        employees.pop();
    }

    cout << time << endl;

    return 0;
}