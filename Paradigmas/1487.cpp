#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Product {
    int value;
    int weight;
    
    double getBenefit() const {
        return (double) value / weight;
    }

    static bool comparator(const Product& a, const Product& b) {
        return a.getBenefit() > b.getBenefit();
    }
};

int knapsack(vector<Product> products, int capacity) {
    sort(products.begin(), products.end(), Product::comparator);

    int totalValue = 0;

    for (const Product& p : products) {
        totalValue += (capacity / p.weight) * p.value;
        capacity %= p.weight;
    }

    return totalValue;
}

// solved as knapsack problem
int main() {
 
    int n, t, ncase = 0;

    while (cin >> n >> t) {
        if (n == 0) break;
        ncase++;

        vector<Product> products(n);

        for (int i = 0; i < n; i++) {
            cin >> products[i].weight >> products[i].value;
        }

        cout << "Instancia " << ncase << endl;
        cout << knapsack(products, t) << endl << endl;
    }
 
    return 0;
}