#include <iostream>
#include <cmath>  // For sqrt()

bool isPerfectSquare(int n) {
    if (n < 0) return false;  // Negative numbers cannot be perfect squares
    int sqrtN = static_cast<int>(sqrt(n));  // Compute the integer square root of n
    return (sqrtN * sqrtN == n);  // Check if the square of the sqrtN equals n
}

int main() {
    int n;
    while (std::cin >> n && n != 0) {
        if (isPerfectSquare(n)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}
