#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    vector<long long> divisors;

    // Loop only up to sqrt(n)
    for (long long i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }

    // Sort divisors to get them in increasing order
    sort(divisors.begin(), divisors.end());

    if (divisors.size() >= k) {
        cout << divisors[k - 1] << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}
