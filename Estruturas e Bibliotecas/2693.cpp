#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
struct Student {
    string name;
    char region;
    int distance;
};

bool comparator(const Student& a, const Student& b) {
    if (a.distance != b.distance)
        return a.distance < b.distance;

    if (a.region != b.region)
        return a.region < b.region;

    return a.name.compare(b.name) < 0;
}

int main() {
 
    int q;
    while (cin >> q) {
        vector<Student> students(q);

        for (Student& s : students) {
            cin >> s.name >> s.region >> s.distance;
        }

        sort(students.begin(), students.end(), comparator);
        
        for (const Student &s : students) {
            cout << s.name << endl;
        }
    }

    return 0;
}