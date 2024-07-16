#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    // Calculate the number of odd numbers in the sequence
    long long odd_count = (n + 1) / 2;

    if (k <= odd_count) {
        // k-th number is in the odd sequence
        cout << 2 * k - 1 << endl;
    } else {
        // k-th number is in the even sequence
        cout << 2 * (k - odd_count) << endl;
    }

    return 0;
}
