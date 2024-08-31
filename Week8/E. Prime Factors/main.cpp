#include <iostream>
#include <cmath>
using namespace std;

// Function to print the prime factors of N
void printPrimeFactors(long long N) {
    // Handle factor of 2 separately
    if (N % 2 == 0) {
        int count = 0;
        while (N % 2 == 0) {
            N /= 2;
            count++;
        }
        cout << 2 << " " << count << endl;
    }

    // Handle odd factors from 3 onwards
    for (long long i = 3; i <= sqrt(N); i += 2) {
        if (N % i == 0) {
            int count = 0;
            while (N % i == 0) {
                N /= i;
                count++;
            }
            cout << i << " " << count << endl;
        }
    }

    // If N is still greater than 2, then it is a prime factor
    if (N > 2) {
        cout << N << " " << 1 << endl;
    }
}

int main() {
    long long N;
    cin >> N;

    printPrimeFactors(N);

    return 0;
}
