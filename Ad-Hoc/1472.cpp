#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
 
    int n;
    
    while (cin >> n) {
        vector<int> points(n);
        
        cin >> points[0];
        for (int i = 1; i < n; i++) {
            cin >> points[i];
            points[i] += points[i-1]; // accumulate values
        }

        if (points.back() % 3 != 0) {
            cout << 0 << endl;
            continue;
        }

        // expected distance of two points in a equilateral triangle
        int semiArc = points.back() / 3;

        int j = 1, k = 2, triangles = 0;

        for (int i = 0; points[i] + 2 * semiArc <= points.back(); i++) {
            while (points[j] < points[i] + semiArc)
                j++;
            
            while (points[k] < points[i] + 2 * semiArc)
                k++;

            if (points[j] == points[i] + semiArc && points[k] == points[j] + semiArc)
                triangles++;
        }

        cout << triangles << endl;
    }
 
    return 0;
}