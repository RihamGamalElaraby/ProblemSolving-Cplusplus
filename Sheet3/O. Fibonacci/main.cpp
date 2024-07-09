#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Base cases
    if (n == 1) {
        cout << "0" << endl;
        return 0;  // Exit after handling base case
    }
    if (n == 2) {
        cout << "1" << endl;
        return 0;  // Exit after handling base case
    }

    // Variables to store previous two Fibonacci numbers
    long long a = 0; // fib(1)
    long long b = 1; // fib(2)
    long long fib;

    // Calculate Fibonacci sequence iteratively
    for (int i = 3; i <= n; ++i) {
        fib = a + b; // Current Fibonacci number
        a = b;       // Update a to the last Fibonacci number
        b = fib;     // Update b to the current Fibonacci number
    }

    cout << fib << endl; // Output the nth Fibonacci number

    return 0;
}
