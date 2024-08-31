#include <iostream>
#include <vector>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

// Function to find the number of distinct prime divisors
int countPrimeDivisors(int num) {
    int count = 0;
    for (int i = 2; i <= num; i++) {
        if (num % i == 0 && isPrime(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    int almostPrimeCount = 0;
    for (int i = 1; i <= n; i++) {
        if (countPrimeDivisors(i) == 2) {
            almostPrimeCount++;
        }
    }

    cout << almostPrimeCount << endl;

    return 0;
}
