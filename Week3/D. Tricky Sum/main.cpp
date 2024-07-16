#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        // Calculate the sum of the first n natural numbers
        long long totalSum = n * (n + 1) / 2;

        // Calculate the sum of all powers of two up to n
        long long sumOfPowers = 0;
        for (long long power = 1; power <= n; power *= 2) {
            sumOfPowers += power;
        }

        // The final result is totalSum - 2 * sumOfPowers
        long long result = totalSum - 2 * sumOfPowers;
        cout << result << endl;
    }

    return 0;
}
