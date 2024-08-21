#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool isPrime(int x) {
    if (x <= 1) return false;  // Numbers less than or equal to 1 are not prime
    if (x <= 3) return true;   // 2 and 3 are prime numbers

    if (x % 2 == 0 || x % 3 == 0) return false; // Check for divisibility by 2 and 3

    // Check for factors from 5 to sqrt(x)
    for (int i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return false;
    }

    return true;
}

int main() {
    int T;
    cin >> T; // Read the number of test cases

    while (T--) {
        int x;
        cin >> x; // Read the number to be checked

        if (isPrime(x)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
