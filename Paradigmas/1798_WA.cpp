#include <algorithm>
#include <iostream>
#include <vector>

#define endl '\n'

using namespace std;

struct Product {
    int value;
    int weight;

    double getBenefit() const { return (double)value / weight; }

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
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;

    cin >> n >> t;
    vector<Product> products(n);

    for (int i = 0; i < n; i++) {
        cin >> products[i].weight >> products[i].value;
    }

    cout << knapsack(products, t) << endl;

    return 0;
}