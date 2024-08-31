#include <iostream>
using namespace std;

// Function to compute the GCD using the Euclidean algorithm
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to compute the LCM using the relationship with GCD
long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    long long A, B;
    cin >> A >> B;

    long long gcd_result = gcd(A, B);
    long long lcm_result = lcm(A, B);

    cout << gcd_result << " " << lcm_result << endl;

    return 0;
}
