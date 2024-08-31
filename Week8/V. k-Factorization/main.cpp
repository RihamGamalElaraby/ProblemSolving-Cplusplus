#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> factors;
    for (int i = 2; i * i <= n && factors.size() < k; i++) {
        while (n % i == 0 && factors.size() < k - 1) {
            factors.push_back(i);
            n /= i;
        }
    }

    if (n > 1) {
        factors.push_back(n);
    }

    if (factors.size() == k) {
        for (int factor : factors) {
            cout << factor << " ";
        }
        cout << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}
