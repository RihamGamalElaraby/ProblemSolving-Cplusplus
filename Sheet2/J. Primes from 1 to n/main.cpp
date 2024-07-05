#include <iostream>
#include <vector>
using namespace std;

void printPrimesUpToN(int N) {
    // Create a boolean vector to mark prime numbers.
    vector<bool> prime(N + 1, true);

    // 0 and 1 are not prime numbers, so mark them as false.
    if (N >= 0) prime[0] = false;
    if (N >= 1) prime[1] = false;

    // Start with the first prime number 2.
    for (int p = 2; p * p <= N; ++p) {
        // If prime[p] is true, then it is a prime.
        if (prime[p]) {
            // Updating all multiples of p to not prime.
            for (int i = p * p; i <= N; i += p) {
                prime[i] = false;
            }
        }
    }

    // Print all prime numbers between 1 and N.
    for (int p = 2; p <= N; ++p) {
        if (prime[p]) {
            cout << p << " ";
        }
    }
    cout << endl; // Print a newline after all primes are printed.
}

int main() {
    int N;
    cin >> N;

    // Output the prime numbers between 1 and N.
    printPrimesUpToN(N);

    return 0;
}
